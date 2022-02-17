#include<math.h>
#include"Shape.h"

int Shape::distance(Vector2 v1, Vector2 v2){
    return sqrt(pow(v2.x - v1.x, 2) + pow(v2.y - v1.y, 2));
}

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
