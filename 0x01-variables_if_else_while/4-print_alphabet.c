#include <stdio.h>
#include <stdlib.h>
/* Aurthor: Uzoagu Excel Chukwuemeka
 * Program: Winmingle Community C Training
 * Description: C Program that prints lower-case Alphabets using putchar function except q and e letter.
 */
int main(void){
    char alp= 'a';

    while (alp <= 'z'){
        if(alp != 'e' && alp != 'q'){
            putchar(alp);
        }
        alp++;
    }

    putchar('\n');
    return(0);
}
