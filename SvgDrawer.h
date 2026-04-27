#ifndef SVGDRAWER_H
#define SVGDRAWER_H
using namespace std;
#include <string>
#include <fstream>


class SvgDrawer
{
  // Private fields
  string htmlFile_;
  int drawingWidth_;
  int drawingHeight_;
  ofstream htmlStream_;
  string strokeColor_;
  float strokeWidth_;
  string fillColor_;

  // Private methods
  void openTag(string tagName,  string attribute="");
  void closeTag(string tagName);
  void emptyTag(string tagName,string attribute="");
  void tag(string tagName,string attribute="",string content="");
  string setAttribStyle() ;
  void jscriptRefreshTag();

public:

  SvgDrawer(string htmlFile, int dWidth=400, int dHeight=400);

  void setDrawingSize(int dWidth,int dHeight);

  string strokeColor() const
    {return strokeColor_;}

  void setStrokeColor(string sColor)
    {strokeColor_=sColor;}

  float strokeWidth() const
    {return strokeWidth_;}


  //! Call to start the drawing
  void beginDraw(string title);

  //! Call to end the drawing
  void endDraw();

  //! Draw a line
  void drawLine(double x1,double y1,double x2,double y2);

  void clearDrawing();

string setAttrib(string name, double value);
string setAttrib(string name, string value);
};
#endif 