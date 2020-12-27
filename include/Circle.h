#ifndef CIRCLE_H
#define CIRCLE_H

#include"Line.h"

class Circle: public Line{
private:
    int distance(Vector2 v1, Vector2 v2);
public:
    virtual void draw();
};

#endif // CIRCLE_H
