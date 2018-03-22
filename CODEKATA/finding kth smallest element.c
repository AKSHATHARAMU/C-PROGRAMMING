
#include <stdio.h>
int main(void) {
	int n,count=0,k,a[100],i;
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			printf("%d",a[i]);
			count=1;
			break;
		}
	}
	if(count==0)
	{
			printf("%d",a[k-1]);
	}
	return 0;
}

