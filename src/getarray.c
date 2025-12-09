/*
* ====================================
* Module: getarray()
* ====================================
*
* ====================================
* Description:
* ====================================
*   Reads a sequence of integer values from standard input and store them
*   into the provided integer array. Inputs stops when the array reaches its
*   limit or when the user enters the termination character '#'
*
* ====================================
* Inupts:
* ====================================
*   @numbers - An integer array to store each valid integer input is stored
*   @limit   - Maximum number of elements allowed in @numbers
*
* ====================================
* Process:
* ====================================
*   1. Initialized local variables:
*       @num - Stores the integer read.
*       @status - Stores the scanf() return status (valid/invalid) input
*       @index - Thacks the number of integer successfully read.
*
*   2. Prompt the user to enter integer values.
*
*   3. For each input:
*       a) If scanf() successfully reads an integer:
*           - Store the value into @numbers[index]
*           - Increment @index
*           - Prompt for the next input
*
*       b) If scanf() fails (non-numeric input)
*           - Read the offending character
*           - If the character is '#' terminate input collection
*           - Otherwise, inform the user and continue prompting
*
*   4. If @index reaches @limit:
*        - Display a message indicating the array is full
*
*   5. Return the total number of valid integers stored in @numbers.
* 
*/

#include <stdio.h>
#define NONUM 0
#define YESNUM 1
int getarray(int array[], int limit){
    int num, status;
    int index = 0;      /* array index*/

    printf("This program stops reading numbers after %d ", limit);
    printf("Values\nor type '#' to stop. First value: ");
    do{
        status = scanf("%d", &num);
        if(status == YESNUM){
            array[index++] = num;

		printf("%d accepted. ", num);
        
        if(index < limit) printf("Next value: ");

        }else if(status == NONUM){
            char c;
            printf("That was no integer! Enter an integer to \n");
            printf("Continue or no-numeric input to quit: ");

            scanf(" %c", &c);
            if(c == '#')
                break;
            else
                continue;
        }
        else
            printf("Oops! Program should never reach here!\n");
}
while(index < limit);
    if(index == limit)      /* report if array gets filled */
        printf("All %d elements of the array were filled.\n", limit);

    return (index);
}
