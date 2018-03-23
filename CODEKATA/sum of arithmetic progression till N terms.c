#include <stdio.h>

int main(void) {
	int n,a,d,sum=0,i;
	scanf("%d%d%d",&n,&a,&d);
	for(i=0;i<n;i++)
	{
		sum=sum+a;
		a=a+d;
	}
	printf("%d",sum);
	return 0;
}
