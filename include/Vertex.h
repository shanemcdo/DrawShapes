#ifndef VERTEX_H
#define VERTEX_H

#include<raylib.h>

class Vertex: public Vector2{
private:
public:
    Vertex(float _x, float _y);
    Vertex(Vector2 v);
};

#endif // VERTEX_H
