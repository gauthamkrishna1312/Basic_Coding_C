#include<stdio.h>
#include<stdlib.h>
int main(void){
    int i,j,len,wid;

    printf("Enter height = ");
    scanf("%d",&len);
    printf("Enter width = ");
    scanf("%d",&wid);

    for ( i = 0; i < len; i++)
    {
        for (j = 0; j < wid; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    printf("\nFinished\n");
    return EXIT_SUCCESS;
}