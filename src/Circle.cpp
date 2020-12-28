#include"Circle.h"
#include"math.h"

int Circle::distance(Vector2 v1, Vector2 v2){
    return sqrt(pow(v2.x - v1.x, 2) + pow(v2.y - v1.y, 2));
}

#include"DrawingWindow.h"
void Circle::draw(DrawingWindow* window){
    if(vertices.size() == 2){
        Vector2 center = window->grid_to_window(*vertices[0]);
        unsigned radius = distance(center, window->grid_to_window(*vertices[1]));
        DrawCircleLines(center.x, center.y, radius, WHITE);
    }
    draw_verticies(window);
}
