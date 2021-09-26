#include<stdio.h>

void main(){
    int apples[100][100],mangos[100][100],sum[100][100],m,n,i,j;

    printf("************************************\n");
    printf("Enter number of rows : ");
    scanf("%d",&m);
    printf("Enter number of columns : ");
    scanf("%d",&n);
    printf("************************************\n");
    for (  i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("apples(%d%d) = ",i+1,j+1);
            scanf("%d",&apples[i][j]);
        }
    }
    printf("************************************\n");
    for (  i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("mangos(%d%d) = ",i+1,j+1);
            scanf("%d",&mangos[i][j]);
        }
    }
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            sum[i][j]=mangos[i][j]+apples[i][j];
        }
    }
    printf("************************************\n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("sum(%d%d) = %d  ",i+1,j+1,sum[i][j]);
        }
        printf("\n");
    }
    printf("************************************\n");
    printf("Process completed\n");
}    