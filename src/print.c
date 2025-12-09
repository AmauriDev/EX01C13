/* print.c -- prints an array */
#include <stdio.h>
void print(const int array[], int limit)
{
    int index;

    for(index = 0; index < limit; index++){
        printf("%d ", array[index]);
        if(index % 10 == 9)
            putchar('\n');
    }
    if(index % 10 != 0)
        putchar('\n');
}