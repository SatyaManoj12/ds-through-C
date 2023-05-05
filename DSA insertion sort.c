#include<stdio.h>
void insertion_sort(char *a,int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		int num =a[i];
		for(j=i-1;;j--)
		{
			if(a[j]<num)
			{
				a[j+1]=num;
				break;
			}
			else if(j==-1)
			{	
				a[j+1]=num;
				break;
			}
			else
			{
				a[j+1]=a[j];
			}
	}
}
}
int main()
{
	int i,n;
	scanf("%d",&n);
	char s[n];
	scanf("%s",s);
	insertion_sort(s,n);
	printf("%s",s);
}