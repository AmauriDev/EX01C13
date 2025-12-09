/* getarray.c -- reads in an array*/
#include <stdio.h>
#define NONUM 0
#define YESNUM 1
int getarray(int array[], int limit){
    int num, status;
    int index = 0;      /* array index*/

    printf("This program stops reading numbers after %d ", limit);
    printf("Values\nor if EOF is encountered. First value: ");
    status = scanf("%d", &num);
    while(index < limit && status != EOF){
        if(status == YESNUM){
            array[index++] = num;
            printf("%d accepted. ", num);
            if(index < limit)       /* if there's rom*/
            {                       /* get next value*/
                printf("Next value: ");
                status = scanf("%d", &num);
            }
        }else if(status == NONUM){
            scanf("%*s");   /* dispose of bad input */
            printf("That was no integer! Enter an integer to \n");
            printf("Continue or no-numeric input to quit: ");
            if((status = scanf("%d", &num)) == NONUM)
                break;      /* quit loop if nonumeric */
        }
        else{
            printf("Oops! Program should never reach here!\n");
            break;
        }
    }
    if(index == limit)      /* report if array gets filled */
        printf("All %d elements of the array were filled.\n", limit);

    return (index);

}