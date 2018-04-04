#include <stdio.h>
int main(void) 
{
	int n1,n2,n;
	scanf("%d%d",&n1,&n2);
	n=n1*n2;
	if(n%2==0)
	{
		printf("even");
	}
	else
	printf("odd");
	
	return 0;
}
