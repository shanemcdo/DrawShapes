#include"Circle.h"
#include"math.h"

int Circle::distance(Vector2 v1, Vector2 v2){
    return sqrt(pow(v2.x - v1.x, 2) + pow(v2.y - v1.y, 2));
}

void Circle::draw(){
    unsigned radius = distance(vertices[0], vertices[1]);
    DrawCircleLines(vertices[0].x, vertices[0].y, radius, WHITE);
    draw_verticies();
}
