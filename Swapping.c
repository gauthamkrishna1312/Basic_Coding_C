#include<stdio.h>
#include<stdlib.h>

int main(void){
    int a = 10,b;
    printf("Default value = %d\n",a);
    printf("Enter an integer = ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b; 
    printf("Swapped values are a = %d b =%d\n",a,b);
    return EXIT_SUCCESS;
}