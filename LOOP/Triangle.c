#include <stdlib.h>
#include <stdio.h>

int main(void){
    int height;
    printf("Enter the halfe height = ");
    scanf("%d",&height);

    for (int i = 0; i < height ; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("0");
        }
        printf("\n");
    }
    for (int i = height; i >= 0 ; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("0");
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}