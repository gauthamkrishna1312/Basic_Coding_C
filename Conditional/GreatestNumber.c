#include <stdio.h>
#include <stdlib.h>

int main(void){
    float num1,num2;
    printf("Enter two numbers\n");
    scanf("%f%f",&num1,&num2);
    if (num1>num2)
    {
        printf("Greatst number is %f\n",num1);
    }
    else if (num1==num2)
    {
        printf("Entered numbers are equal\n");
    }else
    {
        printf("Greatest number is %f\n",num2);
    }
    return EXIT_SUCCESS;
}