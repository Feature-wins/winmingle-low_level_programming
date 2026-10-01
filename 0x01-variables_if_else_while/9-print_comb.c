#include <stdio.h>
#include <stdlib.h>
/* Aurthor: Uzoagu Excel Chukwuemeka
 * Program: Winmingle Community C Training
 * Description: C Program that prints single-digit numbers seperated by commas and spaces.
 */
int main(void){
    int num= 0;

    while (num <= 9){
        printf("%i",num);
        if(num < 9)
            printf(", ");
       
        num++;
    }

    printf("\n");
    return(0);
}
