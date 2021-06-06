#include<stdio.h>
#include<stdlib.h>

int main(void){
    float num1;
    printf("Enter a numbr\n");
    scanf("%f",&num1);
    if (num1 == 0)
    {
        printf("ZERO");
    }else if (num1>0)
    {
        printf("POSITIVE");
    }else
    {
        printf("NEGATIVE");
    }
    return EXIT_SUCCESS;
}