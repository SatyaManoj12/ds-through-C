/*//factorial  by using recursion//
#include<stdio.h>
int fact(int n){
if(n==1)
return 1;
else return n*fact (n-1);
}

int main(){
int n;
scanf("%d",&n);
int res=fact(n);
printf("%d",res);
}
//sum  by recursion//
#include<stdio.h>
int sum(int n){
	if(n==0)
	return 0;
	else return n%10+sum(n/10) ;
}
int main()
{
	int n;
	scanf("%d",&n);
int	res=sum(n);
	printf("%d",res);
}
//task//
#include<stdio.h>
int fun(int n){
	if(n==0) return 0;
	else return 2+3+fun(n-2);
}
int main()
{
	int n;
	scanf("%d",&n);
	int res=fun(n);
	printf("%d",res);
}
//linear search in functions
#include<stdio.h>
int linear_search(int *arr,int n, int se)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]==se)
		{
	
		return i;
		}
	}
	return -1;	
	
	
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0; i<n;i++)
	scanf("%d",&arr[i]);
	int se;
	scanf("%d",&se);
	int res=linear_search(arr,n,se);
	if(res==-1)
	{
		printf("element not found");
	}
	else
	{
		printf("element found at %d index",res);
	}
}*/