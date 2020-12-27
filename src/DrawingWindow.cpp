#include<algorithm>
#include"DrawingWindow.h"
#include"Line.h"
#include"Circle.h"

DrawingWindow::DrawingWindow(Vector2 size):window_size(size){}

void DrawingWindow::run(){
    InitWindow(window_size.x, window_size.y, "Drawing Window");
    SetTargetFPS(30);
    Circle l;
    l.add_vertex({500, 500});
    l.add_vertex({600, 600});
    // shapes.push_back(Line());
    // shapes[0].add_vertex({100, 100});
    while(!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(BLACK);
        // shapes[0].draw();
        l.draw();
        EndDrawing();
    }
    CloseWindow();
}
