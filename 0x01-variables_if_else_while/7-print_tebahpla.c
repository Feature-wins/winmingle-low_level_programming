#include <stdio.h>
#include <stdlib.h>
/* Aurthor: Uzoagu Excel Chukwuemeka
 * Program: Winmingle Community C Training
 * Description: C Program that prints backwards lower-case Alphabets using putchar function.
 */
int main(void){
    char alp= 'z';

    while (alp >= 'a'){
        putchar(alp);
        alp--;
    }

    putchar('\n');
    return(0);
}
