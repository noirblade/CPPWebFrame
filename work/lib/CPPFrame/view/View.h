/*
 * =====================================================================================
 *
 *       Filename:  View.h
 *
 *    Description:  Base View logic
 *
 *        Version:  1.0
 *        Created:  12/19/2009 10:40:44 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kail (k), sickboy@anarchy.name
 *        Company:  Ergon
 *
 * =====================================================================================
 */


#include "../library.h"

#ifndef VIEW_H
#define VIEW_H

class View{
      Registry *reg;
      Request * apr;
   public:
      std::string htmlTemplate;
      View();
      ~View();
      void show();
};

#endif
