#include<algorithm>
#include"DrawingWindow.h"

DrawingWindow::DrawingWindow(Vector2 size):window_size(size){}

void DrawingWindow::run(){
    InitWindow(window_size.x, window_size.y, "Drawing Window");
    SetTargetFPS(30);
    while(!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(BLACK);
        EndDrawing();
    }
    CloseWindow();
}
