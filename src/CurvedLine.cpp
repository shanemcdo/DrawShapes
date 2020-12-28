#include"DrawingWindow.h"
#include"CurvedLine.h"

void CurvedLine::draw(DrawingWindow* window){
    if(vertices.size() == 2)
        DrawLineBezier(window->grid_to_window(*vertices[0]), window->grid_to_window(*vertices[1]), 1, WHITE);
    draw_verticies(window);
}
