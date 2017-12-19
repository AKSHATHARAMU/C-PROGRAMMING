#include<stdio.h>
void main()
{
	int n,sum=0,i;
	printf("Enter the n natural numbers");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("%d",sum);
}
		
