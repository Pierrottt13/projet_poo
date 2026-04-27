#ifndef MENU_H
#define MENU_H

#include <string>
#include <vector>
#include "drawing.h"
#include "tortue.h"
#include "SvgDrawer.h"

class SvgDrawer;

class Menu
{
  Drawing drawing_;
  std::vector<std::string> mainMenu_;
  std::vector<std::string> shapeMenu_;
public:
  Menu(SvgDrawer *drawer);
  void print(const std::vector<std::string> &menu) const;
  void execute();
  unsigned promptUser(unsigned nbOptions) const;
  void newDrawing();
  void addShape();
  void removeShape();
};

#endif // MENU_H