/*form.h*/

#ifndef FORM_
#define FORM_

#define BUTTON 0
#define TOGGLE_BUTTON 1
#define ICON_BUTTON 2
#define MENU 3
#define SUBMENU 4
#define CONTEXT_STRIP 5
#define PANEL 6
#define FRAME 7
#define LABEL 8
#define TEXTBOX 9
#define CHECKBOX 10
#define RATIOBOX 11
#define SPLITTER 12
#define SCROLLBAR 13
#define TOOLBAR 14
#define IMAGEBOX 15
#define LISTBOX 16
#define TREELIST 17
#define DYNAMICSTRING 18
#define STATICSTRING 19
#define MESSAGEBOX 20
#define IMAGEPANEL 21

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
