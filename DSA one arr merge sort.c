#include<stdio.h>
void merge_sort(int *a,int l,int m,int r)
{
	int res[r-l+1],k=0;
	int i=l,j=m+1;
	while(i<=m && j<=r)
	{
		if(a[i]<=a[j]) res[k++]=a[i++];
		else res[k++]=a[j++];
	}
	while(i<=m)
	{
		res[k++]=a[i++];
	}
	while(j<=r)
	{
		res[k++]=a[j++];
	}
	int z;
	for(z=l;z<=r;z++)
	{
		printf("%d",res[z]);//a[z]=res[z];
	}
}
int main()
{
	int i,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	merge_sort(a,0,(n-1)/2-1,n-1);//	merge_sort(a,0,(n-1)/2,n-1); for even
/*	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	return 0;*/
}
