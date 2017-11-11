/*
 * =====================================================================================
 *
 *       Filename:  RequestData.h
 *
 *    Description:  Storage take care off all Request data
 *
 *        Version:  1.0
 *        Created:  12/19/2009 03:33:46 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kail (k), sickboy@anarchy.name
 *        Company:  Ergon
 *
 * =====================================================================================
 */
#include "../library.h"
#ifndef REQUESTDATA_H
#define REQUESTDATA_H

class RequestData{
      int paramsCount;
      typedef std::map <std::string, std::string> paramMap;
      std::vector <paramMap> storage;
      std::vector <std::string> tempVector;
      paramMap data;
      bool found;
      std::map <std::string, std::string>::iterator storageIter;
   public:
      RequestData();
      ~RequestData();
      int getCount() const;
      std::string get(const std::string key);
      void push(const std::string key, const std::string value);
      void set(const std::string key, const std::string value);
      std::vector <std::string> getAll(const std::string key);
      void dump();
};

#endif
