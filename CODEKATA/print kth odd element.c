#include <stdio.h>
int main(void) {
	int n,count=1,k,a[100],i;
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			if(count==k)
			{
				printf("%d",a[i]);
			}
			count++;
		}
	}
	return 0;
}
