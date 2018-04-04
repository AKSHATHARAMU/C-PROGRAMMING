#include <stdio.h>

int main(void) 
{
	int n,n2;
	scanf("%d%d",&n,&n2);
	n=n^n2;
	n2=n^n2;
	n=n^n2;
	printf("%d %d",n,n2);
	return 0;
}
