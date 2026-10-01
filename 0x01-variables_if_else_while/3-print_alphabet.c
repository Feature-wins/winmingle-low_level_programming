#include <stdio.h>
#include <stdlib.h>
/*Aurhor: Uzoagu Excel Chukwuemeka
 * Program: Winmingle Community C Training
 * Description: C Program that prints both lower_case and upper_case alphabet.
 */
int main(void){
    char salp= 'a'; 
    char balp= 'A';

    while (salp <= 'z'){
        putchar(salp);
        salp++;
    }

    while (balp <= 'Z'){
        putchar(balp);
        balp++;
    }

    putchar('\n');
    return(0);
}
