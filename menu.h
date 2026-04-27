#ifndef MENU_H
#define MENU_H
using namespace std;

#include <string>
#include <vector>
#include "tortue.h"
#include "instruction.h"

class SvgDrawer;

class Menu
{
  Tortue tortue_;
  vector<string> mainMenu_;
  vector<string> shapeMenu_;

public:
  Menu(SvgDrawer *drawer);
  void print(const vector<string> &menu) const;
  void execute();
  void newDrawing();
  void clear();
};

#endif // MENU_H