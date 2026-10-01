#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* Author: Uzoagu Excel Chukwuemeka
 * Program: Winmingle Community C Training
 * Description: A C program that prints the last digit of a random number
 */
int main(void){
    int n;
    int last;

    //random function and time function
    srand(time(0));
    n= rand() - RAND_MAX /2;
    last= n % 10;

    if (last > 5)
        printf("last digit of %i is %i and is greater than 5\n", n, last);
    else if (last == 0)
        printf("last digit of %i is %i and is equal to 0\n", n, last);
    else if (last < 6)
        printf("last digiT of %i is %i and is less than 6 and not 0\n", n, last);
    return(0);
}
