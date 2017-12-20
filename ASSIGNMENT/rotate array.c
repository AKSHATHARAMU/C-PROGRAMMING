#include <stdio.h>
int main(void) {
	int n,a[10],k,i,j;
	scanf("%d",n);
	for(j=0;j<n;j++)
	{
		scanf("%d",&a[j]);
	}
	scanf("%d",k);
	t=a[0];
	for(i=0;i<k;i++)
	{
		for(j=0;j<n;j++)
		{
			a[j]=a[j+1];
			a[j+1]=t;
		}
	}
	for(j=0;j<n;j++)
	{
	printf("%d",a);
	}
	return 0;
}
	
