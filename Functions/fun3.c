#include<stdio.h>

int result();
void main(){
    int sum;
    sum = result();
    printf("Sum of the numbers =%d\n",sum);
}

int result(){
    int num1,num2,num3;
    printf("Enter two numbers \n");
    scanf("%d%d",&num1,&num2);
    num3 = num1+num2;
    return num3;
}