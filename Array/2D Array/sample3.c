#include<stdio.h>

void main(){
    int apples[100][100],m,n;

    printf("Enter values to the 5x2 matrix\n");
    printf("************************************\n");
    printf("Enter the order of matrix less than 100x100(mxn)\n");
    scanf("%d%d",&m,&n);
    printf("************************************\n");
    for (int  i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("apples(%d%d) = ",i+1,j+1);
            scanf("%d",&apples[i][j]);
        }
    }
    printf("************************************\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("apple(%d%d) = %d  ",i,j,apples[i][j]);
        }
        printf("\n");
    }
    printf("************************************\n");
    printf("Process completed\n");
}    