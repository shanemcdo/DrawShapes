#include"Vertex.h"

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

void Vertex::draw(){
    DrawCircle(x, y, radius, RED);
}
