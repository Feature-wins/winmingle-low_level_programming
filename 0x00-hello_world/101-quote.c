#include <stdio.h>
#include <unistd.h>
/**
 * Author: Uzoagu Excel Chukwuemeka
 * Program: Winmingle Community C Training
 * Description: Printing outputs without printf and puts
 */
int main(void){
    char sen[]="\"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    write(1, sen, sizeof(sen) -1);
    return(1);
}
