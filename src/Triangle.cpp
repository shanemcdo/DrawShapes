#include"DrawingWindow.h"
#include"Triangle.h"

Triangle::Triangle(){
    max_verticies = 3;
    vertices.reserve(max_verticies); // fix error with returning a pointer to a spot in a vector
}

void Triangle::draw(DrawingWindow* window){
    int size = vertices.size();
    for(int i = 0; i < size; i++)
        DrawLineV(window->grid_to_window(*vertices[i % size]), window->grid_to_window(*vertices[(i + 1) % size]), WHITE);
    draw_verticies(window);
}
