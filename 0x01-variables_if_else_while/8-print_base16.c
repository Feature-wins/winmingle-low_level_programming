#include <stdio.h>
#include <stdlib.h>
/* Aurthor: Uzoagu Excel Chukwuemeka
 * Program: Winmingle Community C Training
 * Description: C Program that prints hexadecimal digits i.e from 0 to f.
 */
int main(void){
    int  hex= 0;

    while (hex < 16){
        printf("%x",hex);
        hex++;
    }
    printf("\n");
    return(0);
}
