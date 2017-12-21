#include <stdio.h>

int main(void) {
	// your code goes here
	int n,fact=1,i;
	scanf("%d",&n);
	if(n>0)
	{
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	}
	printf("%d",fact);
	return 0;
}
