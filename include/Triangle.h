#ifndef TRIANGLE_H
#define TRIANGLE_H

#include"Line.h"

class Triangle: public Line{
public:
    Triangle();
    virtual void draw(DrawingWindow* window);
};

#endif // TRIANGLE_H
