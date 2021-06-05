#include<stdio.h>
#include<stdlib.h>

int main(void){

    float num1,num2,num3,ave;
    printf("Enter three numbers\n");
    scanf("%f%f%f",&num1,&num2,&num3);
    ave = (num1+num2+num3)/3;
    printf("Average of the entered number is = %f\n",ave);

    return EXIT_SUCCESS;
}