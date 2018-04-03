#include <stdio.h>

int main(void) {
	
	int n,hr=0,min;
	scanf("%d",&n);
	if(n<60)
	{
		printf("%d %d",hr,n);
	}
	else
	{
		hr=n/60;
		min=n%60;
		printf("%d %d",hr,min);
	}
	return 0;
}
