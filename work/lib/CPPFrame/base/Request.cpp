/*
 * =====================================================================================
 *
 *       Filename:  Request.cpp
 *
 *    Description:  Apache request manager
 *
 *        Version:  1.0
 *        Created:  10/13/2009 01:13:45 PM
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Kail (k), sickboy@anarchy.name
 *        Company:  Ergon
 *
 * =====================================================================================
 */

#include "Request.h"
#include "../library.h"

using namespace std;

Request::Request(){
   std::cerr << "Request object is build!\n";
   parse();
}

Request::~Request(){
	cleanUp();
}

void Request::sendHeaders(ostream& os){
   for (iter = headers.begin(); iter != headers.end(); ++iter){
      os << iter->first << iter->second;
   }
}

void Request::setHeader(string header, string value){
      headers[header] = value;
}

std::string Request::getPostParams(){

   envContentLength = getenv("CONTENT_LENGTH");
   
   if(envContentLength == NULL){
      return "";
   }

   contentLength = atoi(envContentLength);
   if (contentLength == 0){
      return "";
   }
   postParams = (char *) malloc(contentLength+1);

   if (postParams == NULL){
      cout << "Allocation failed\n";
      return "";
   }
   memset(postParams, 0, contentLength+1);
      
   size = fread(postParams, 1, contentLength, stdin);

   if (size == 0){
      cerr << "fread() failed\n";
      return "";
   }
   return postParams;
}

void Request::parse(){

   // TODO First get suitable Extractor 
   // Then extract data 
   // Get suitable parser
   // Add it to repository

   // TODO XXX Build apopriate parser 
   //ParserFactory factory;
   //AbstractParser * parser = factory.buildParser(getenv("CONTENT_TYPE"));
   //parser->parse(&data);

   // Process GET params
	if (getenv("QUERY_STRING")){
		data = getenv("QUERY_STRING");
	}
 
   if (data.length() > 0){
      data += "&";
   }
   
   data = data + getPostParams();
	tool.Tokenize(data, tokens);

   cerr << data;    

   // XXX Optimizations needed!
	for (unsigned int i = 0; i < tokens.size(); i++){
      paramsToken.clear();
      tool.TokenizeFirst(tokens[i], paramsToken, "=");
      std::string key("");

      // We should go only twice throught this loop
      for (unsigned int j = 0; j < paramsToken.size(); j++){
         if (key.length() <= 0){
            key = paramsToken[j];
         } else {
            repository.push(key, paramsToken[j]);
         }
      }
	}
}

std::string Request::param(const string key){
   return repository.get(key);
}

void Request::setParam(const string key, const string value){
   repository.set(key, value);
}

std::vector<std::string> Request::allParams(const string key){
   return repository.getAll(key);
}

void Request::dumpParams(){
   repository.dump();
}

void Request::cleanUp(){
	headers.clear();
   paramsToken.clear();
   tokens.clear();
}

