#include"Shape.h"

Vertex* Shape::add_vertex(Vector2 v){
    if(vertices.size() < max_verticies){
        vertices.push_back(new Vertex(v, this));
        return vertices[vertices.size() - 1];
    }
    return nullptr;
}

void Shape::draw_verticies(DrawingWindow* window){
    for(Vertex* vertex: vertices){
        vertex->draw(window);
    }
}

Shape::~Shape(){
    for(Vertex* vertex: vertices)
        delete vertex;
};
