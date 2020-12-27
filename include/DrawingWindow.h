#ifndef DRAWING_WINDOW_H
#define DRAWING_WINDOW_H

#include<vector>
#include<raylib.h>
#include"Shape.h"

class DrawingWindow{
private:
    Vector2 window_size;
    char* window_title;
    std::vector<Shape> shapes;
public:
    DrawingWindow(Vector2 _window_size);
    void run();
};

#endif // DRAWING_WINDOW
