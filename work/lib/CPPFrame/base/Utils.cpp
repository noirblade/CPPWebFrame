/*
 * =====================================================================================
 *
 *       Filename:  Utils.cpp
 *
 *    Description:  Some basic utilities
 *
 *        Version:  1.0
 *        Created:  10/13/2009 04:52:04 PM
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Kail (k), sickboy@anarchy.name
 *        Company:  Ergon
 *
 * =====================================================================================
 */
#include "Utils.h"
#include "../library.h"
using namespace std;

Utils::Utils(){

}

Utils::~Utils(){

}

void Utils::Tokenize(const string& str, vector<string>& tokens, const string& delimiters){

    // Skip delimiters at beginning.
    string::size_type lastPos = str.find_first_not_of(delimiters, 0);
    // Find first "non-delimiter".
    string::size_type pos     = str.find_first_of(delimiters, lastPos);

    while (string::npos != pos || string::npos != lastPos){
        // Found a token, add it to the vector.
        tokens.push_back(str.substr(lastPos, pos - lastPos));
        // Skip delimiters.  Note the "not_of"
        lastPos = str.find_first_not_of(delimiters, pos);
        // Find next "non-delimiter"
        pos = str.find_first_of(delimiters, lastPos);
    }
}

void Utils::TokenizeFirst(const string& str, vector<string>& tokens, const string& delimiters){

   // Skip delimiters at beginning.
   string::size_type lastPos = str.find_first_not_of(delimiters, 0);
   // Find first "non-delimiter".
   string::size_type pos = str.find_first_of(delimiters, lastPos);
   tokens.push_back(str.substr(lastPos, pos - lastPos));
   lastPos = str.find_first_not_of(delimiters, pos);
   tokens.push_back(str.substr(lastPos, string::npos));
}
