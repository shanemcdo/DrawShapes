#include<math.h>
#include"DrawingWindow.h"
#include"Arc.h"

void Arc::draw_bezier_curve(DrawingWindow* window){
    Vector2 v0 = *vertices[0];
    Vector2 v1 = *vertices[1];
    Vector2 v2 = *vertices[2];
    Vector2 prev_result = v0;
    for(float i = 0; i <= 1.01; i += 0.05){
        Vector2 result{
            (powf((1 - i),2) * v0.x + 2 * (1 - i) * i * v1.x + powf(i, 2) * v2.x),
            (powf((1 - i),2) * v0.y + 2 * (1 - i) * i * v1.y + powf(i, 2) * v2.y),
        };
        DrawLineV(window->grid_to_window(prev_result), window->grid_to_window(result), WHITE);
        prev_result = result;
    }
}

void Arc::draw(DrawingWindow* window){
    int size = vertices.size();
    if(size == 2)
        Line::draw(window);
    else if(size == 3){
        draw_bezier_curve(window);
        draw_verticies(window);
    }
}
