#include<iostream>
#include<algorithm>
#include<math.h>
#include"DrawingWindow.h"
#include"Line.h"
#include"Circle.h"

void DrawingWindow::draw_grid(){
    for(int i = 0; i < window_size.x; i += cell_size.x)
        DrawLine(i, 0, i, window_size.y, {30, 30, 30, 255});
    for(int i = 0; i < window_size.y; i += cell_size.y)
        DrawLine(0, i, window_size.x, i, {30, 30, 30, 255});
    DrawLine(0, pan_offset.y, window_size.x, pan_offset.y, GRAY);
    DrawLine(pan_offset.x, 0, pan_offset.x, window_size.y, GRAY);
}

void DrawingWindow::draw_cursor(){
    DrawCircleV(get_mouse_grid(), 10, {0, 220, 0, 100});
}

Vector2 DrawingWindow::grid_to_window(Vector2 pos){
    return {
        pos.x * cell_size.x + pan_offset.x,
        pos.y * cell_size.y + pan_offset.y,
    };
}

Vector2 DrawingWindow::window_to_grid(Vector2 pos){
    return {
        roundf((pos.x - pan_offset.x) / cell_size.x),
        roundf((pos.y - pan_offset.y) / cell_size.y),
    };
}

Vector2 DrawingWindow::get_mouse_grid(){
    return grid_to_window(window_to_grid(GetMousePosition()));
}

DrawingWindow::DrawingWindow(Vector2 size):window_size(size){
    pan_offset = {size.x / 2, size.y / 2};
}

void DrawingWindow::run(){
    InitWindow(window_size.x, window_size.y, "Drawing Window");
    SetTargetFPS(30);
    while(!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(BLACK);
        draw_grid();
        draw_cursor();
        EndDrawing();
    }
    CloseWindow();
}
