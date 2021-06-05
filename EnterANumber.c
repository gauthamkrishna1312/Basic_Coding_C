#include<stdio.h>
#include<stdlib.h>

int main(void){

    int num1=0,num2=10;                       /*Variable decleration*/
    printf("Default value :%d ",num1);        /*To print default value*/ 
    printf("Enter an integer \n");            /* To ask user for enter an integer */
    scanf("%d",&num1);                        /*Recive an integer*/
    printf("Entered integer is: %d\n",num1);  /*To print entered value*/
    printf("Default value : %d\n",num2);      /*To print default value*/

    return EXIT_SUCCESS;
}