#ifndef VERTEX_H
#define VERTEX_H

#include<raylib.h>

class DrawingWindow; // forward declaration
class Shape; // forward declaration

class Vertex: public Vector2{
private:
    static float radius;
    Shape* parent;
public:
    Vertex(float _x, float _y, Shape* _parent);
    Vertex(Vector2 v, Shape* _parent);
    Shape* get_parent();
    void draw(DrawingWindow* window);
};

#endif // VERTEX_H
