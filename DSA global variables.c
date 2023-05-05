/*#include<stdio.h>
int a;
void fun()
{
	printf("from the function fun %d",a);
}
int main()
{
	scanf("%d",&a);
	fun ();
	printf("\nfrom main() function %d",a);
	
}*/
#include<stdio.h>
int a[5];
void read()
{
	for (int i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
}
int main()
{
	read();
	for(int i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
}
