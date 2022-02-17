#ifndef CIRCLE_H
#define CIRCLE_H

#include"Line.h"

class Circle: public Line{
private:
public:
    virtual void draw(DrawingWindow* window);
};

#endif // CIRCLE_H
