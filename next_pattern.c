#include "next_pattern.h"

char *next_pattern()
{
    static char patterns[5][100] = {"hallow", "solid", "horizon", "vertical", "diagonal"};    // Initialize array with all possible patterns
    static int index=-1;  // Start the index at -1 so that first call the increment below gets us to 0
    
    index++;

    if (index>=5)   // Once we go through the whole array, start back with the first element (index = 0)
    {
        index = 0;
    }

    return patterns[index];
}