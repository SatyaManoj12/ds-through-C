//ASCENDING ORDER//
#include<stdio.h>
void bubble_sort(int *arr,int n)
{
	int i,j,temp,flag=0;
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(arr[j]>arr[j+1]){//arr[j]<arr[j+1]//
				flag=1;
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		if(flag==0)break;
	}
}}
int main()
{
	int i,n;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	bubble_sort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
