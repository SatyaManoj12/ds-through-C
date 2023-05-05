 #include<stdio.h>
void selection_sort(int *arr,int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
			int min=arr[i],ind=i;
		for(j=i+1;j<n;j++){
			if(arr[j]<min)
			{
			//	min=arr[j];
				ind=j;
			}
		}
		int temp=arr[i];
		arr[i]=arr[ind];
		arr[ind]=temp;
	}
}
int main()
{
	int i,n;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	selection_sort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
