#include"Shape.h"

Vertex* Shape::add_vertex(Vector2 v){
    if(vertices.size() < max_verticies){
        Vertex new_vertex(v, this);
        vertices.push_back(new_vertex);
        return &vertices[vertices.size() - 1];
    }
    return nullptr;
}

void Shape::draw_verticies(DrawingWindow* window){
    for(auto vertex: vertices){
        vertex.draw(window);
    }
}

Shape::~Shape(){};
