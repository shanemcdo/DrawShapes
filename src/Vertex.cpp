#include<algorithm>
#include"Vertex.h"
#include"DrawingWindow.h"

float Vertex::radius = 5;

Vertex::Vertex(float _x, float _y, Shape* _parent):parent(_parent){
    x = _x;
    y = _y;
}

Vertex::Vertex(Vector2 v, Shape* _parent):parent(_parent){
    x = v.x;
    y = v.y;
}

Shape* Vertex::get_parent(){
    return parent;
}

void Vertex::draw(DrawingWindow* window){
    Vector2 center = window->grid_to_window(*this);
    DrawCircle(center.x, center.y, radius, RED);
}

void Vertex::remove(){
    parent->vertices.erase(std::remove(parent->vertices.begin(), parent->vertices.end(), this));
}
