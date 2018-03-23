#include <stdio.h>
int main(void) {
	int n,a[100],max=0,min,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		else if(a[i]<min)
		{
			min=a[i];
		}
		else
		break;
	}
	printf("%d %d",min,max);
	return 0;
}
