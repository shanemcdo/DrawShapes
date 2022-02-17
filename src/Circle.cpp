#include"Circle.h"

#include"DrawingWindow.h"
void Circle::draw(DrawingWindow* window){
    if(vertices.size() == 2){
        Vector2 center = window->grid_to_window(*vertices[0]);
        unsigned radius = distance(center, window->grid_to_window(*vertices[1]));
        DrawCircleLines(center.x, center.y, radius, WHITE);
    }
    draw_verticies(window);
}
