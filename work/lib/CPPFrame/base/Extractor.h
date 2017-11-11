/*
 * =====================================================================================
 *
 *       Filename:  Extractor.h
 *
 *    Description:  Base extractor functionality
 *
 *        Version:  1.0
 *        Created:  12/23/2009 12:12:12 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kail (k), sickboy@anarchy.name
 *        Company:  Ergon
 *
 * =====================================================================================
 */

#include "../library.h"
#ifndef EXTRACTOR_H
#define EXTRACTOR_H

class Extractor{

   protected:
      Extractor();

   public:
      //virtual ClientData *extract() = 0;
      virtual ~Extractor();
};

#endif
