#include <stdio.h>
#include <stdlib.h>
/* Aurthor: Uzoagu Excel Chukwuemeka
 * Program: Winmingle Community C Training
 * Description: C Program that prints all possible three-digits numbers seperated by commas and spaces.
 */
int main(void){
    int num1= 0;
    int num2= 0;
    int num3= 0;

    while (num1 <= 9 ){
        num2= 0;

        while(num2 <= 9){
            num3= 0;

            while (num3 <= 9){

                if(num1 != num2 && num1 != num3 && num2 != num3){
                    printf("%i%i%i, ", num1,num2,num3);
                }
                
                num3++;
            }
            num2++;
        }
        num1++;
    }

    printf("\n");
    return(0);
}
