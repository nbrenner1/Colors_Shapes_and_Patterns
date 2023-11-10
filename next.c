#include "next.h"
#include <string.h>
#include <stdio.h>

char *next()
{
    static char objects[105][100];         // Declare an array to hold the resulting combination
    static char *patterns[5] = {"hallow", "solid", "horizon", "vertical", "diagonal"};      // Initialize arrays of shapes, colors, and patterns
    static char *shapes[3] = {"circle", "triangle", "square"};
    static char *colors[7] = {"red", "orange", "yellow", "green", "blue", "indigo", "violet"};

    static int index=-1;       // Start all indexes at -1 in order to get to index 0 upon first call
    static int colorIndex=-1;
    static int patternIndex=-1;
    static int shapeIndex=-1;

    index++;       // Increment indexes each call
    colorIndex++;
    patternIndex++;
    shapeIndex++;


    if (index>=105)       // For each of the arrays, if the index reaches the end of the array, restart at the beginning
    {
        index = 0;
    }
    if (colorIndex>=7)
    {
        colorIndex = 0;
    }
    if (patternIndex>=5)
    {
        patternIndex = 0;
    }
    if (shapeIndex>=3)
    {
        shapeIndex = 0;
    }
    
    sprintf(objects[index], "%s-%s-%s", colors[colorIndex], patterns[patternIndex], shapes[shapeIndex]);  // Save a new string with each value (color, pattern, and shape) with dashes between to the combination array

    return objects[index];
}