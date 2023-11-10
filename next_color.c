#include "next_color.h"

char *next_color()
{
    static char colors[7][100] = {"red", "orange", "yellow", "green", "blue", "indigo", "violet"};    // Initialize array with all possible colors
    static int index=-1;   // Start the index at -1 so that first call the increment below gets us to 0
    
    index++;

    if (index>=7)   // Once we go through the whole array, start back with the first element (index = 0)
    {
        index = 0;
    }

    return colors[index];
}