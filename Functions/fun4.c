#include<stdio.h>

void sum();
void main(){
    printf("Enter two numbers\n");
    sum();
}

void sum(){
    int num1,num2,num3;
    scanf("%d%d",&num1,&num2);
    num3 = num1+num2;
    printf("Sum of this number is = %d",num3);
}