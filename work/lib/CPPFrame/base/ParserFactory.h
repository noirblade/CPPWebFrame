/*
 * =====================================================================================
 *
 *       Filename:  ParserFactory.h
 *
 *    Description:  Factory for parsers
 *
 *        Version:  1.0
 *        Created:  12/22/2009 05:16:20 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kail (k), sickboy@anarchy.name
 *        Company:  Ergon
 *
 * =====================================================================================
 */

#include "../library.h"
#ifndef PARSER_FACTORY_H
#define PARSER_FACTORY_H

class ParserFactory: public AbstractParserFactory{

   public:
      AbstractParser *buildParser(const char *contenttype);
};

#endif
