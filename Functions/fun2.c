#include<stdio.h>

void sum(int,int);
void main(){
    int num1,num2;
    printf("Enter two numbrs\n");
    scanf("%d%d",&num1,&num2);
    sum(num1,num2);
}

void sum(int num1,int num2){
    int sum;
    sum = num1+num2;
    printf("Sum of this numbers = %d\n",sum); 
}