#include<stdio.h>
#include<stdlib.h>

int main(void){
    int a[100],n,i;
    printf("Enter size of the array = ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Values are \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",a[i]);
    }
    
    return EXIT_SUCCESS;
}