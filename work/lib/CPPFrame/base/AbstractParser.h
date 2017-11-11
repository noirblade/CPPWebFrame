/*
 * =====================================================================================
 *
 *       Filename:  AbstractParser.h
 *
 *    Description:  Abstract parser. Gives base functionality for parsers
 *
 *        Version:  1.0
 *        Created:  12/22/2009 05:38:38 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kail (k), sickboy@anarchy.name
 *        Company:  Ergon
 *
 * =====================================================================================
 */

#include "../library.h"
#ifndef ABSTRACT_PARSER_H
#define ABSTRACT_PARSER_H

class RequestData;

class AbstractParser{
   protected:

      AbstractParser();
   public:
      static int unescape(char *s);
      virtual bool parse(RequestData *repository, char *buffer, int length) = 0;
      virtual ~AbstractParser();

};

#endif
