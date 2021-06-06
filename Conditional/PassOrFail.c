#include<stdio.h>
#include<stdlib.h>

int main(void){
    float score;
    printf("Entr score\n");
    scanf("%f",&score);
    if (score >=50)
    {
        printf("Pass");
    }else{
        printf("Fail");
    }
    

    return EXIT_SUCCESS;
}