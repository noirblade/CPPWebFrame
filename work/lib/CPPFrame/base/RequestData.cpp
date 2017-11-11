/*
 * =====================================================================================
 *
 *       Filename:  RequestData.cpp
 *
 *    Description:  Storage take care off all Request data
 *
 *        Version:  1.0
 *        Created:  12/19/2009 03:52:39 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kail (k), sickboy@anarchy.name
 *        Company:  Ergon
 *
 * =====================================================================================
 */

#include "RequestData.h"
#include "../library.h"

RequestData::RequestData(){
}

RequestData::~RequestData(){
   for (unsigned int i = 0; i < storage.size(); i++){
      storage[i].clear();
   }
   storage.clear();
   tempVector.clear();
}

void RequestData::push (const std::string key, const std::string value) {
   data[key] = value;
   storage.push_back(data);
   ++paramsCount;
   data.clear();
}

int RequestData::getCount() const {
   return paramsCount;
}

void RequestData::dump() {
   for (unsigned int i = 0; i < storage.size(); i++){
      for (storageIter = storage[i].begin(); storageIter != storage[i].end(); ++storageIter){
         std::cerr << storageIter->first + " => " + storageIter->second + "\n";
      }
   }
}

void RequestData::set(const std::string key, const std::string value) {
   found = false;

   for (unsigned int i = 0; i < storage.size(); i++){
      storageIter = storage[i].find(key);
      if (storageIter != storage[i].end()){
         if (found){
            // Clear any other params with same name
            storage[i].clear();
            --paramsCount;
            continue;
         }
         found = true;
         storageIter->second = value;
      }
   }
   if (found){
      return;
   }
   push(key, value);
   ++paramsCount;
}

std::string RequestData::get(const std::string key) {
   
   for (unsigned int i = 0; i < storage.size(); i++){
      storageIter = storage[i].find(key);
      if (storageIter != storage[i].end()){
         return storageIter->second;
      }
   }
   return "";
}

std::vector <std::string> RequestData::getAll(const std::string key){

   tempVector.clear();
   for (unsigned int i = 0; i < storage.size(); i++){
      storageIter = storage[i].find(key);
      if (storageIter != storage[i].end()){
         tempVector.push_back(storageIter->second);
      }
   }
   return tempVector;
}
