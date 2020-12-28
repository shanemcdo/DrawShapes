#ifndef CURVED_LINE_H
#define CURVED_LINE_H

#include"Line.h"

class CurvedLine: public Line{
public:
    virtual void draw(DrawingWindow* window);
};

#endif // CURVED_LINE_H
