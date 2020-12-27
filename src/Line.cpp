#include"Line.h"

Line::Line(){
    max_verticies = 2;
    vertices.reserve(max_verticies); // fix error with returning a pointer to a spot in a vector
}

void Line::draw(){
    DrawLine(vertices[0].x, vertices[0].y, vertices[1].x, vertices[1].y, WHITE);
    draw_verticies();
}
