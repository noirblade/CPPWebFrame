/*
 * =====================================================================================
 *
 *       Filename:  View.cpp
 *
 *    Description:  Base View logic
 *
 *        Version:  1.0
 *        Created:  12/19/2009 10:45:29 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kail (k), sickboy@anarchy.name
 *        Company:  Ergon
 *
 * =====================================================================================
 */


#include "View.h"
#include "../library.h"

View::View(){
   /* Get Registry instance */
   reg = Registry::getInstance();

   apr = static_cast<Request *> (reg->get("apr"));
}

View::~View(){

}

void View::show(){
   std::string content = content_type;
   content += ";charset=";
   content += charset;
   content += "\n\n";
   apr->setHeader("Content-type:", content);
   apr->sendHeaders();

   std::ifstream htmlStream;

   std::string path = templatePath + htmlTemplate;
   htmlStream.open(path.c_str());

   if (!htmlStream) {
      // TODO Error page !!?
      std::cerr << "Can not find template!\n";
      exit(-1);
   }
   int length;
   char * buffer;

   htmlStream.seekg (0, std::ios::end);
   length = htmlStream.tellg();
   htmlStream.seekg (0, std::ios::beg);

   buffer = new char [length];
   htmlStream.read (buffer,length);
   htmlStream.close();

   std::cout.write(buffer, length);
   delete [] buffer;
}

