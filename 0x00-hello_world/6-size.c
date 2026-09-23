#include <stdio.h>
/**
 * Author: Uzoagu Excel Chukwuemeka
 * Program: Winmingle Community C Training
 * Descreption: Printing Sizes of data types
 */
int main(void){
    printf("The size of a char: %zu byte(s)\n", sizeof(char));
    printf("The size of an int: %zu byte(s)\n", sizeof(int));
    printf("The size of a float: %zu byte(s)\n", sizeof(float));
    printf("The size of a long int: %zu byte(s)\n",sizeof(long int));
    printf("The size of a short int: %zu byte(s)\n", sizeof(short int));
    return (0);
}
