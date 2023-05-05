#include <stdio.h>
void merge(int *a, int m, int *b, int n)
{
	int res[m+n],k=0,i=0,j=0;
	while(i<m && j<n)
	{
		if(a[i]<=b[j])
		{
			res[k++]=a[i++];
		}
		else
		{
			res[k++]=b[j++];
		}
	}
	while(i<m)
	{
		res[k++]=a[i++];
	}
	while(j<n)
	{
		res[k++]=b[j++];
	}
	int z;
	for(z=0; z<m+n; z++)
	{
		printf(" %d",res[z]);
	}
}
int main()
{
	int m,n,i,j,k;
	scanf("%d%d",&m,&n);
	int a[m],b[n];
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++)
	{
		scanf("%d",&b[j]);
	}
	 merge(a,m,b,n);
	
}
 