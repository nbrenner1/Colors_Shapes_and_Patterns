#include "next_shape.h"

char *next_shape()
{
    static char shapes[3][100] = {"circle", "triangle", "square"};    // Initialize array with all possible shapes
    static int index=-1;   // Start the index at -1 so that first call the increment below gets us to 0
    
    index++;

    if (index>=3)   // Once we go through the whole array, start back with the first element (index = 0)
    {
        index = 0;
    }

    return shapes[index];
}