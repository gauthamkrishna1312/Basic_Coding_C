#include<stdio.h>

int sum(int,int);
void main(){
    int num1,num2,num3;
    printf("Enter two numbrs\n");
    scanf("%d%d",&num1,&num2);
    num3 = sum(num1,num2);
    printf("Sum of this numbers = %d",num3);
}

int sum(int n1,int n2){
    int s;
    s= n1 + n2;
    return s;
}