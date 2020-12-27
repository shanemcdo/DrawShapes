#include"Vertex.h"

Vertex::Vertex(float _x, float _y){
    x = _x;
    y = _y;
}

Vertex::Vertex(Vector2 v){
    x = v.x;
    y = v.y;
}
