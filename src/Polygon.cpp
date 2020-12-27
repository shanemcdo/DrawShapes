#include"DrawingWindow.h"
#include"Polygon.h"

Polygon::Polygon(){
    max_verticies = 9999999;
    vertices.reserve(max_verticies); // fix error with returning a pointer to a spot in a vector
}
