/*
 * =====================================================================================
 *
 *       Filename:  ParserFactory.cpp
 *
 *    Description:  Factory for parsers
 *
 *        Version:  1.0
 *        Created:  12/22/2009 05:30:06 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kail (k), sickboy@anarchy.name
 *        Company:  Ergon
 *
 * =====================================================================================
 */

#include "../library.h"
#include "ParserFactory.h"

AbstractParser * ParserFactory::buildParser(const char *contenttype){
   return new URLEncodeParser();
}
