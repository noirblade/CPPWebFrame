/*
 * =====================================================================================
 *
 *       Filename:  AbstractParserFactory.h
 *
 *    Description:  Abstract factory builder for parsers
 *
 *        Version:  1.0
 *        Created:  12/22/2009 05:21:45 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kail (k), sickboy@anarchy.name
 *        Company:  Ergon
 *
 * =====================================================================================
 */

#include "../library.h"
#ifndef ABSTRACT_PARSER_FACTORY_H
#define ABSTRACT_PARSER_FACTORY_H

class AbstractParserFactory{

   protected:
      AbstractParserFactory();
   public:
      virtual AbstractParser *buildParser(const char *contenttype) = 0;
      virtual ~AbstractParserFactory();
};

#endif
