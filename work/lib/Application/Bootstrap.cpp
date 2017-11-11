/*
 * =====================================================================================
 *
 *       Filename:  Bootstrap.cpp
 *
 *    Description:  Bootstrap file. All requests goes through here
 *
 *        Version:  1.0
 *        Created:  10/13/2009 03:36:27 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kail (k), sickboy@anarchy.name
 *        Company:  Ergon
 *
 * =====================================================================================
 */

#include "Bootstrap.h"
using namespace std;

Bootstrap::Bootstrap(){
   
   /* Get Registry instance */
   reg = Registry::getInstance();
   
   /* Register Apache Request object */
   reg->set("apr", &apr);

   //Request * test = static_cast<Request *> (reg->get("apr"));
}

Bootstrap::~Bootstrap(){

}

void Bootstrap::run(){

   View view;
   view.htmlTemplate = "index.html";

   apr.setParam("testAAA", "bbbb");
   apr.dumpParams();

   //std::string param = apr.param("testAAAasdsd");
   //vector <string> params = apr.allParams("test1asdsd");

   view.show();
}
