#include"DrawingWindow.h"
#include"Line.h"

Line::Line(){
    max_verticies = 2;
    vertices.reserve(max_verticies); // fix error with returning a pointer to a spot in a vector
}

void Line::draw(DrawingWindow* window){
    DrawLineV(window->grid_to_window(vertices[0]), window->grid_to_window(vertices[1]), WHITE);
    draw_verticies(window);
}
