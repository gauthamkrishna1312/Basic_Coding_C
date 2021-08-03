#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ar1[100];
    printf("Enter the size of columns(should be less than 100) = ");
    int n;
    scanf("%d",&n);
    printf("Enter integers to columns\n");

    for (int i = 0; i < n; ++i)
    {
        scanf("%d",&ar1[i]);
    }
    
    int large =ar1[0],second_large =ar1[1];

    for (int i = 0; i < n; ++i)
    {
        if (ar1[i]>large)
        {
            second_large = large;
            large = ar1[i];
        }
    }
    printf("Largest number is = %d\n",large);
    printf("Second largest number is = %d\n",second_large);
    return EXIT_SUCCESS;
}
