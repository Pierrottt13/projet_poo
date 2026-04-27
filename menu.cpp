#include <iostream>
#include <sstream>
#include "Svgdrawer.h"
#include "menu.h"


using namespace std;

Menu::Menu(SvgDrawer *drawer)
{

  mainMenu_={
    "Menu principal",
    "Commencer un nouveau dessin",
    "Sortir de l'application"
  };

  shapeMenu_={
    "Ajouter une forme",
    "Ligne",
    "Rectangle",
    "Cercle",
    "Retour au menu"
  };
}

void Menu::print(const vector<string> &menu) const
{
  cout<<"Dessin actuel : ";
  tortue_.print();
  cout<<endl;

  if (!menu.empty()) {
      cout<<menu.front()<<endl;
      for (unsigned i=1;i<menu.size();i++) {
          cout<<"- "<<i<<" : "<<menu[i]<<endl;
        }
    }
}

unsigned Menu::promptUser(unsigned nbOptions) const
{
  cout<<"Votre choix : ";
  string choice;
  cin>>choice;

  istringstream is(choice);
  unsigned opt;
  is>>opt;
  if (is.fail() || opt>nbOptions) {
      opt=0;
      cout<<"choix impossible"<<endl;
    }
  return opt;
}

void Menu::execute()
{
  bool done=false;
  while(!done) {
      system("cls");
      print(mainMenu_);
      unsigned opt=promptUser(mainMenu_.size());
      switch(opt) {
        case 1:
          newDrawing();
          break;
        case 2:
          addShape();
          break;
        case 3:
          removeShape();
          break;
        case 4:
          done=true;
          break;
        default:
          break;
        }
      if (!done) {
          drawing_.update();
        }
    }
}





