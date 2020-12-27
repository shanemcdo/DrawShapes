#ifndef SHAPE_H
#define SHAPE_H

#include<vector>
#include"Vertex.h"

class Shape{
protected:
    std::vector<Vertex> vertices;
    unsigned max_verticies = 0;
public:
    Vertex* add_vertex(Vector2 v);
    void draw_verticies();
    virtual void draw() = 0;
};

#endif // SHAPE_H
