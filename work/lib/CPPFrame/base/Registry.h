/*
 * =====================================================================================
 *
 *       Filename:  Registry.h
 *
 *    Description:  Registry header. Implements singleton pattern. Used for storring various objects
 *                  that can be used as a single instance among the classes in project
 *
 *        Version:  1.0
 *        Created:  11/12/2009 11:52:40 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kail (k), sickboy@anarchy.name
 *        Company:  Ergon
 *
 * =====================================================================================
 */

#include "../library.h"
#ifndef REGISTRY_H
#define REGISTRY_H

class Registry{
      static bool instanceFlag;
      static Registry *single;
      Registry();
   public:
      ~Registry();
      static Registry* getInstance();
      void set(std::string label, void * object);
      void * get(std::string label);
      std::map<std::string, void *> store;
};

#endif
