#include<stdio.h>
#include<stdlib.h>

int main(void){
	int ar[100];

	printf("Enter the size of array (Should be less than 100) = \n");
	int n;
	scanf("%d",&n);

	printf("Enter values to the array\n");
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&ar[i]);
	}

	int temp;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (ar[i]<ar[j])
			{
				temp = ar[i];
				ar[i] = ar[j];
				ar[j] = temp;
			}
		}
	}

	printf("Sorted array\n");
	for (int i = 0; i < n; ++i)
	{
		printf("%d\n",ar[i]);
	}
	return EXIT_SUCCESS;
}
