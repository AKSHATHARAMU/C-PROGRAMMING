#include <stdio.h>
#include<string.h>
int main(void) {
	int n,k,res,i;
	scanf("%d%d",&n,&k);
	res=n;
	for(i=1;i<k;i++)
	{
		res=res*n;
	}
	printf("%d",res);
	return 0;
}
