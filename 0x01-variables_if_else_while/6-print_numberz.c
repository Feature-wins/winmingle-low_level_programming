#include <stdio.h>
#include <stdlib.h>
/* Aurthor: Uzoagu Excel Chukwuemeka
 * Program: Winmingle Community C Training
 * Description: C Program that prints number without char variable using putchar function.
 */
int main(void){
    int num= 0;

    while (num < 10){
        putchar(48 + num);
        num++;
    }

    putchar('\n');
    return(0);
}
