#include<stdio.h>
void main()
{
	int c=0,n;
	printf("Enter the number");
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		c++;
	}
	printf("%d",c);
}
		
