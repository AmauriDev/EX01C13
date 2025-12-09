/* sort_int.c -- sorts integers */
#include <stdio.h>
#define MAXSIZE 100     /* limit to number of integers to sort */
extern int getarray(int arry[], int limit);
extern void sort(int array[], int n);
extern void print(const int array[], int limit);
int main(void)
{
    int numbers[MAXSIZE];                       /* array to hold input */
    int size;                                   /* number of input items*/

    size = getarray(numbers, MAXSIZE);          /* put input into array */
    printf("\nOriginal data (%d values):\n", size);
    print(numbers, size);                       /* print original array */
    sort(numbers, size);                        /* sort the array */
    puts("Sorted data");
    print(numbers, size);                       /* print the sorted array */
    return 0;
}