#include<stdio.h>

void main(){
    int array[3][4]={{2,3,5,4},{1,2,3,6}};
    array[2][0]=6;
    array[2][1]=8;
    array[2][2]=10;
    array[2][3]=17;
    printf("*******************************\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Array of %d%d = %d  ",i,j,array[i][j]);
        }
        printf("\n");
    }
    
}