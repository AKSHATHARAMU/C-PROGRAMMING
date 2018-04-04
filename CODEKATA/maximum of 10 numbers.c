#include <stdio.h>

int main(void) {
	int a[100],temp,i;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	temp=a[0];
	for(i=0;i<10;i++)
	{
		if(a[i]>temp)
		{
			temp=a[i];
		}
	}
	printf("%d",temp);
	return 0;
}
