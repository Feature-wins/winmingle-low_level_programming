#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* Author: Uzoagu Excel Chukwuemeka
 * Program: Winmingle Community C Training
 * Description: C program that prints random positive and negative numbers
 */
int main(void){
    int n;
    srand(time(0));
    n= rand()- RAND_MAX /2;

    if (n > 0)
        printf("%i is positive\n", n);
    else if (n < 0)
        printf("%i is negative\n", n);
    else
        printf("%i is zero\n", n);
    return(0);
}
