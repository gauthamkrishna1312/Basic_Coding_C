#include<stdio.h>

void main(){
    int apples[5][2];
    printf("Enter values to the 5x2 matrix\n");
    printf("************************************\n");

    for (int  i = 0; i < 5; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("apples(%d%d) = ",i+1,j+1);
            scanf("%d",&apples[i][j]);
        }
    }
    printf("*****************************************\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("apple(%d%d) = %d  ",i,j,apples[i][j]);
        }
        printf("\n");
    }
    printf("Process completed\n");
}