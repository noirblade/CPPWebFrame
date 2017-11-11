/*
 * =====================================================================================
 *
 *       Filename:  Utils.h
 *
 *    Description:  Utils proto file
 *
 *        Version:  1.0
 *        Created:  10/13/2009 04:55:01 PM
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Kail (k), sickboy@anarchy.name
 *        Company:  Ergon
 *
 * =====================================================================================
 */

#include "../library.h"
#ifndef UTILS_H
#define UTILS_H

class Utils{
	public:
		Utils();
		~Utils();
		void Tokenize(const std::string& str, std::vector<std::string>& tokens, const std::string& delimiters = "&");
		void TokenizeFirst(const std::string& str, std::vector<std::string>& tokens, const std::string& delimiters = "=");
};

#endif
