/*
 * =====================================================================================
 *
 *       Filename:  AbstractExtractorFactory.h
 *
 *    Description:  Abstract factory for GET, POST etc... extractors
 *
 *        Version:  1.0
 *        Created:  12/23/2009 11:31:07 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kail (k), sickboy@anarchy.name
 *        Company:  Ergon
 *
 * =====================================================================================
 */

#include "../library.h"

#ifndef ABSTRACTEXTRACTORFACTORY_H
#define ABSTRACTEXTRACTORFACTORY_H
class AbstractExtractorFactory{

protected:

        AbstractExtractorFactory();

public:

        virtual Extractor *buildExtractor(const char *method) const = 0;
        virtual ~AbstractExtractorFactory();

};

#endif
