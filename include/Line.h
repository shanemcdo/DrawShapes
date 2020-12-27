#ifndef LINE_H
#define LINE_H

#include"Shape.h"

class Line: public Shape{
public:
    Line();
    virtual void draw(DrawingWindow* window);
};

#endif // LINE_H
