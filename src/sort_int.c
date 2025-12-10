/* 
* ======================================
* Module: main()
* ======================================
*
* ======================================
* Purpose
* ======================================
*   Acts as the orchestrator of the program. Coordinates input collection,
*   sorting, and displaying integer values.
*
* ======================================
* Responsabilities:
* ======================================
*   - Collect integer values using getarray()
*   - Display values before and after sorting using print()
*   - sort the values in descending order using sort()
*   - Handle the scenerario where no valid data is provided
*
* ======================================
* Inputs:
* ======================================
*   None (user input is handled internally by getarray()).
*
* ======================================
* Process Overview
* ======================================
*   1. Declare a local buffer (@numbers) to store up to MAXSIZE integers.
*   2. Call getarray() to prompt the user and retrieve input values.
*       @size stores the number of valid integers entered
*
*   3. If @size > 0:
*       - Display original values with print()
*       - Sort the values with sort()
*       - Display sorted values with print()
*      Otherwise:
*       - Display the message "No data available"
*
* =======================================
* Outputs:
* =======================================
*   - Display original and sorted intger list to the console
*
*/
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
    if(size > 0){ // If the user type valid input
        printf("\nOriginal data (%d values):\n", size);
        print(numbers, size);                       /* print original array */
        sort(numbers, size);                        /* sort the array */
        puts("Sorted data");
        print(numbers, size);                       /* print the sorted array */
    }else
        printf("No data available");
    
    
    return 0;
}