#ifndef DRAWING_WINDOW_H
#define DRAWING_WINDOW_H

#include<vector>
#include<raylib.h>
#include"Shape.h"
#include"Vertex.h"

class DrawingWindow{
private:
    Vector2 window_size;
    Vector2 cell_size{40, 40};
    Vector2 pan_offset{1000, 1000};
    Vector2 mouse_pos;
    Vector2 prev_mouse_pos;
    Vertex* current_vertex = nullptr;
    char* window_title;
    std::vector<Shape*> shapes;
    void draw_grid();
    void draw_cursor();
    void mouse_input();
    void keyboard_input();
    template<class T>
    void add_new_shape();
    Vector2 get_mouse_window_rounded();
public:
    Vector2 grid_to_window(Vector2 pos);
    Vector2 window_to_grid(Vector2 pos);
    Vector2 round_window_to_grid(Vector2 pos);
    DrawingWindow(Vector2 _window_size);
    void run();
};

#endif // DRAWING_WINDOW
