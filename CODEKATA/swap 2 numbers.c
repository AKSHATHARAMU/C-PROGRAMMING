#include <stdio.h>
#include<string.h>
int main(void) 
{
	int n1,n2,n;
	scanf("%d%d",&n1,&n2);
	n=n1;
	n1=n2;
	n2=n;
	printf("%d %d",n1,n2);
	return 0;
}
