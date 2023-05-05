#include<stdio.h>
void bubble_sort(char *arr,int n)
{
	int i,j,flag=0;
	char temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(arr[j]>arr[j+1]){
				flag=1;
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
		if(flag==0)break;
	}
}
int main()
{
	int i,n;
	scanf("%d",&n);
	char s[n];
	scanf("%s",s);
	bubble_sort(s,n);
	printf("%s",s);
}
