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
}

void DrawingWindow::draw_cursor(){
    DrawCircleV(grid_to_window(window_to_grid(GetMousePosition())), 10, {0, 220, 0, 100});
}

Vector2 DrawingWindow::grid_to_window(Vector2 pos){
    return {
        pos.x * cell_size.x,
        pos.y * cell_size.y,
    };
}

Vector2 DrawingWindow::window_to_grid(Vector2 pos){
    return {
        roundf(pos.x / cell_size.x),
        roundf(pos.y / cell_size.y),
    };
}

DrawingWindow::DrawingWindow(Vector2 size):window_size(size){}

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
