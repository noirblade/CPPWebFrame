/*
 * =====================================================================================
 *
 *       Filename:  Request.h
 *
 *    Description:  Apache request manager
 *
 *        Version:  1.0
 *        Created:  10/13/2009 12:47:46 PM
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Kail (k), sickboy@anarchy.name
 *        Company:  Ergon
 *
 * =====================================================================================
 */
#include "../library.h"

#ifndef REQUEST_H
#define REQUEST_H

class Request {
      /* Recieved data */
	   std::string data;

      /* Length of the data */
      char* envContentLength;

      /* Post parameters received */
      char* postParams;

      /* atoi envContentLength */
      int   contentLength;

      /* Just for check if fread fails */
      size_t size;

      /* Output headers */
      std::map<std::string, std::string> headers;
      
      /* Splited params on '&' */
      std::vector<std::string> paramsToken;
      
      /* Splited params on '=' */
      std::vector<std::string> tokens;


      /* Params received holder*/
      RequestData repository;

      /* Just map iterators */
      std::map<std::string, std::string>::iterator iter;
      std::map<std::string, std::string>::iterator paramsIter;

      /* For tokenizing params */
	   Utils tool;

      /* Receive post data */
      std::string getPostParams();

      /* Clean structures */
		void cleanUp();
	public:
		Request();
		~Request();
      /* Send output headers */
		void sendHeaders(std::ostream& os = std::cout);

      /* Set output header */
		void setHeader(std::string header, std::string value);

      /* Parse input params */
		void parse();

      /* Get input param */
      std::string param(const std::string key);
      
      /* Get all params with specific name */
      std::vector<std::string> allParams(const std::string key);
      
      /* Set custom input param */
      void setParam(const std::string key, const std::string value);

      /* Dump repository parameters. Debugging only */
      void dumpParams();
};

#endif
