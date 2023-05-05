#include <stdio.h>
void printarray(int *arr,int n)
{
	for(int i=0;i<n;i++) 
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int get_Max(int *arr,int n)
{
	int max=arr[0];
	for(int i=1;i<n;i++)
	{
		if (arr[i]>max) max=arr[i];
	}
	return max;
}
void radix_sort(int *arr,int n)
{      
	int max=get_Max(arr,n);
	int e=1;
	while (max>0)
	{
		int counts[10]={0};
		int buckets[10][n];
		for(int i=0;i<n;i++)
		{
			int place=(arr[i]/e)%10;
			buckets[place][counts[place]++]=arr[i];
		}
		int k=0;
		for(int i=0;i<10;i++)
		{
			for(int j=0;j<counts[i];j++)
			{
				arr[k++]=buckets[i][j];
			}
		}
		e*=10;
	//	max/=10;
	}
	//printarray(arr,n);
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	radix_sort(arr,n);
	printarray(arr,n);
}
