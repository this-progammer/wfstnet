/*form.h*/

#ifndef FORM_
#define FORM_

namespace wfsforms
{
  namespace component
  {
          class FormWidget {
            public:
              FormWidget();
              ~FormWidget();
      
              FormWidget& set() {
                  return *this;
              }

          protected:
          int widget;
          const std::string& name;
          const std::string& textAttr;
          };
  }
}

#endif
