#include<stdio.h>
#include<stdlib.h>

int main(void){

    float num1,num2,sum;
    printf("Enter two numbers\n");
    scanf("%f%f",&num1,&num2);
    sum = num1+num2;
    printf("Sum of the entered number is = %f\n",sum);

    return EXIT_SUCCESS;
}