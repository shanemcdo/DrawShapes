#ifndef DRAWING_WINDOW_H
#define DRAWING_WINDOW_H

#include<vector>
#include<raylib.h>
#include"Shape.h"

class DrawingWindow{
private:
    Vector2 window_size;
    Vector2 cell_size{40,40};
    char* window_title;
    std::vector<Shape> shapes;
    void draw_grid();
    void draw_cursor();
    Vector2 grid_to_window(Vector2 pos);
    Vector2 window_to_grid(Vector2 pos);
public:
    DrawingWindow(Vector2 _window_size);
    void run();
};

#endif // DRAWING_WINDOW
