#include <stdio.h>
int main(void) {
	int n,i;
	long int temp=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		temp=temp*i;	
	}
	printf("%ld",temp);
	return 0;
}
