#include <stdio.h>

int main(void) 
{
	int num,a=1,b=1,c,i;
	scanf("%d",&num);
	printf("%d",a);
	printf("%d",b);
	for(i=1;i<=num-2;i++)
	{
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
	}
	return 0;
}
