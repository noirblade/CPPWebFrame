/*
 * =====================================================================================
 *
 *       Filename:  ExtractorFactory.h
 *
 *    Description:  Factory for building extractors
 *
 *        Version:  1.0
 *        Created:  12/23/2009 12:05:25 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kail (k), sickboy@anarchy.name
 *        Company:  Ergon
 *
 * =====================================================================================
 */

#include "../library.h"
#ifndef EXTRACTORFACTORY_H
#define EXTRACTORFACTORY_H

class ExtractorFactory: public AbstractExtractorFactory{

   public:
      Extractor *buildExtractor(const char *method) const;
};

#endif
