// Lab 8
// Author: Nick Brenner

#include <stdio.h>
#include "next.h"
#include "next_color.h"
#include "next_shape.h"
#include "next_pattern.h"

int main()
{
    printf("Colors:\n");
    for (int i=0; i<10; i++)
        printf("\t%s\n", next_color());     // Call color function and print results 

    printf("Shapes:\n");
    for (int i=0; i<5; i++)
        printf("\t%s\n", next_shape());     // Call shape function and print results

    printf("Patterns:\n");
    for (int i=0; i<7; i++)
        printf("\t%s\n", next_pattern());   // Call pattern function and print results

    printf("Objects:\n");
    for (int i=0; i<110; i++)
        printf("\t%s\n", next());           // Call next function to print all combinations of colors, shapes, and patterns
}

