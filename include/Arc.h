#ifndef ARC_H
#define ARC_H

#include"Triangle.h"

class Arc: public Triangle{
private:
    void draw_bezier_curve(DrawingWindow* window);
public:
    virtual void draw(DrawingWindow* window);
};

#endif // ARC_H
