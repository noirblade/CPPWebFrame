/*
 * =====================================================================================
 *
 *       Filename:  URLEncodeParser.h
 *
 *    Description:  Parser for URL encoded content type 
 *
 *        Version:  1.0
 *        Created:  12/22/2009 05:50:52 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kail (k), sickboy@anarchy.name
 *        Company:  Ergon
 *
 * =====================================================================================
 */

#include "../library.h"
#ifndef URLENCODEPARSER_H
#define URLENCODEPARSER_H

class URLEncodeParser: public AbstractParser{

public:
        bool parse(RequestData *repository, char *buffer, int length);

};

#endif
