#ifndef DRAWING_WINDOW_H
#define DRAWING_WINDOW_H

#include<raylib.h>
#include"Vertex.h"

class DrawingWindow{
private:
    Vector2 window_size;
    char* window_title;
public:
    DrawingWindow(Vector2 _window_size);
    void run();
};

#endif // DRAWING_WINDOW
