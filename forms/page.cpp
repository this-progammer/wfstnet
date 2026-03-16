/*page.cpp*/

#include "page.h"

wfsforms::Page::Page()
{
}

wfsforms::Page::~Page()
{
}

// create page
void wfsforms::Page::createPage( Page& page, int bits, const std::string& name ) {
  for(auto iterator = name.begin(); iterator != name.end(); iterator++) {
      page.get();
      bits = sizeof( *page );
      page.setStringAttributes();
  }
}
