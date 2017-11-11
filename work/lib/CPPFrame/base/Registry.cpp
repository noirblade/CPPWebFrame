/*
 * =====================================================================================
 *
 *       Filename:  Registry.cpp
 *
 *    Description:  Registry class. Implements singleton pattern. Used for storring various objects
 *                  that can be used as a single instance among the classes in project
 *
 *        Version:  1.0
 *        Created:  11/12/2009 11:57:39 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kail (k), sickboy@anarchy.name
 *        Company:  Ergon
 *
 * =====================================================================================
 */

#include "Registry.h"

Registry::Registry(){
}

Registry::~Registry(){
   instanceFlag = false;
}

bool Registry::instanceFlag = false;
Registry* Registry::single = NULL;

Registry* Registry::getInstance(){
    if(!instanceFlag){
        single = new Registry();
        instanceFlag = true;
        return single;
    } else {
        return single;
    }
}

void Registry::set(std::string label, void * object){
   store[label] = object;
}

void * Registry::get(std::string label){
   if (store[label] == NULL){
      std::cout << "Can't find " << label <<" object. Object not registered!\n";
      exit(-1);
   }
   return store[label];
}


