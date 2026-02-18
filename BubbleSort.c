#include<stdio.h>
int main()
{
	int n,temp;
	int i,j;
	printf("Enter the number of element:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	// Bubble sort logic
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("sorted array:\n");
	for(i=0;i<n;i++)
	printf("%d",arr[i]);
	return 0;
}
