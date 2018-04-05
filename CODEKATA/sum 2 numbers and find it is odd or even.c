#include <stdio.h>
#include<string.h>
int main(void) {
	int n1,n2,n;
	scanf("%d %d",&n1,&n2);
	n=n1+n2;
	if(n%2!=0)
	{
		printf("odd");
	}
	else
	printf("even");
	return 0;
}
