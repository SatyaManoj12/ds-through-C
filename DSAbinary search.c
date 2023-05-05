#include<stdio.h>
int binary(int*arr,int n,int se)
{
	int l=0,h=n-1,mid;
	while(l<=h)
	{
		mid=(l+h)/2;
	 if(se==arr[mid]) return mid;
	 else if(se>arr[mid])  l=mid+1;
	 else  h=mid-1;
	}
	return -1;	
}

int main()
{
	int i,n;
	scanf("%d",&n);
	int arr[n];
	for( i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int se;
	scanf("%d",&se);
	int res=binary(arr,n,se);
	if (res==-1)
	{
		printf("element not found");
	}
	else
	{
		printf("element found at %d index",res);
    }
}

