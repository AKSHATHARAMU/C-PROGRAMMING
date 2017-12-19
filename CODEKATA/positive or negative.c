#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n>0)
	{
		printf("\npositive");
	}
	else if(n==0)
	{
		printf("\n Zero");
	}
	else
		printf("\nnegative");
	return 0;
}
