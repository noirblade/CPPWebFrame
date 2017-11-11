/*
 * =====================================================================================
 *
 *       Filename:  ExtractorFactory.cpp
 *
 *    Description:  Factory for building extractors
 *
 *        Version:  1.0
 *        Created:  12/23/2009 12:09:05 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kail (k), sickboy@anarchy.name
 *        Company:  Ergon
 *
 * =====================================================================================
 */


#include "../library.h"

Extractor * ExtractorFactory::buildExtractor(const char *method) const
{
        if(method)
        {
                //if(strcmp(method, "GET") == 0)
                //{
                        return new GETExtractor();

                //}
                //else if(strcmp(method, "POST") == 0)
                //{
                //        return (new POSTExtractor(new ParserFactory()));
                //}
                //else if(strcmp(method, "") == 0)
                //{
                //        return new CommandLineExtractor();
                //}
        //}
       // else
        //{
        //        return new CommandLineExtractor();
        }
       // return new UnknownExtractor();
       return new GETExtractor();
}

