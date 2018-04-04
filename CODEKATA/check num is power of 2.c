#include <stdio.h>

int main(void) {
	int n,count=0;
	scanf("%d",&n);
	while(n>1)
	{
		if(n%2!=0)
		{
			count=1;
		}
		n=n/2;
	}
	if(count==1)
	{
		printf("no");
	}
	else
	printf("yes");
	return 0;
}
