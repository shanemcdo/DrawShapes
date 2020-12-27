#ifndef SHAPE_H
#define SHAPE_H

#include<vector>
#include"Vertex.h"

class DrawingWindow;

class Shape{
protected:
    std::vector<Vertex> vertices; // a list of vertices for the shape in grid coordinates not window coordinates
    unsigned max_verticies = 0;
public:
    Vertex* add_vertex(Vector2 v);
    void draw_verticies(DrawingWindow* window);
    virtual void draw(DrawingWindow* window) = 0;
    virtual ~Shape();
};

#endif // SHAPE_H
