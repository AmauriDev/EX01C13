/*
* =====================================
* Module: print()
* =====================================
*
* =====================================
* Description:
* =====================================
* Print a list of integer values
* =====================================
*
* =====================================
* Inputs:
* =====================================
*   @array - Integer array
*   @limit - Number of elements in @array
*
* =====================================
* Process:
* =====================================
*   1. Declare index variable
*   2. Go throug from @index to @limit
*   3. Print a value on @array[@index]
*   4. Evaluate if @index % is equal 9 or 10 elements to print a new line
*   5. To loop end and @index is no % 0 print a new line
*
*/
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