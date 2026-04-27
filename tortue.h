#include <iostream>
#include <cmath>
#include "position.h"
#include "Svgdrawer.h"
using namespace std;

class Tortue {
Position position_;
double orientation_;
bool etat_;
SvgDrawer *drawer;
public:
Tortue(Position pos = Position(0, 0), double orientation = 0, bool etat = true);
void avancer(double distance);
void tourner(double angle);
void lever();
void baisser();
void reculer(double distance);
void print() const;
void reset();
};
