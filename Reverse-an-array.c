#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	
	printf("Enter array size :");
	scanf("%d",&n);
	
	int *a=(int*)malloc(n*sizeof(int));
	
	printf("Enter array elements : \n",n);
	
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Original array \n");
	
	for(int i=0;i<n;i++)
		printf("%d  ",a[i]);
	
	for(int i=0;i<(n/2);i++)
	{
		int t=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=t;
		
	}
	
	printf("\nAfter reverse: \n");
	
	for(int i=0;i<n;i++)
		printf("%d  ",a[i]);
	
	return 0;
	
}
