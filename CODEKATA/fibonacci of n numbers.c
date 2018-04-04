#include <stdio.h>

int main(void) {
	int n,a=1,b=1,i,c;
	scanf("%d",&n);
	printf("%d ",a);
	printf("%d",b);
	for(i=1;i<=n-2;i++)
	{
		c=a+b;
		printf(" %d",c);
		a=b;
		b=c;
	}
	return 0;
}
