/*
 * =====================================================================================
 *
 *       Filename:  Bootstrap.h
 *
 *    Description:  Bootstrap proto file.
 *
 *        Version:  1.0
 *        Created:  10/13/2009 03:51:32 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kail (k), sickboy@anarchy.name
 *        Company:  Ergon
 *
 * =====================================================================================
 */

#include "CPPFrame/library.h"
#ifndef BOOTSTRAP_H
#define BOOTSTRAP_H

class Bootstrap{
      Request apr;
      Registry *reg;
	public:
		Bootstrap();
		~Bootstrap();
		void run();
};

#endif
