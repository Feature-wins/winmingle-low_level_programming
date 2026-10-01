#include <stdio.h>
#include <stdlib.h>
/* Aurthor: Uzoagu Excel Chukwuemeka
 * Program: Winmingle Community C Training
 * Description: C Program that prints two-digits numbers seperated by commas and spaces.
 */
int main(void){
    int num1= 1;

    while (num1 <= 10 ){
        putchar((num1/10) + '0');
        putchar((num1 % 10) + '0');

        if(num1 < 10){
            putchar(',');
            putchar(' ');
        }
        num1++;
    }

    putchar('\n');
    return(0);
}
