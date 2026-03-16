/*page.h*/

#ifndef PAGE_
#define PAGE_

#include <string>

namespace wfsforms 
{

class Page {
public:
  Page();
  ~Page();

// create page
void createPage( Page& page, int nBits, const std::string& name );

protected:
const std::string& name;
int bits;
const std::string& file;
};

}

#endif
