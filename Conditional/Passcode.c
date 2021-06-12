#include<stdio.h>
#include<stdlib.h>

int main(void){
    int passcode=12345678,code;
    printf("Enter passcode\n");
    scanf("%d",&code);
    if (code == passcode)
    {
       printf("You are in\n");
    }else
    {
        printf("Invalid passcode\n");
    }    
    return EXIT_SUCCESS;
}