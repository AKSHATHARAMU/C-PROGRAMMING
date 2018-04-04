#include <stdio.h>

int main(void) 
{
	int n[100],tem=0,i;
	for(i=0;i<10;i++)
	{
		scanf("%d",&n[i]);
	}
	tem=n[0];
	for(i=0;i<10;i++)
	{
		if(n[i]>tem)
		{
			tem=n[i];
		}
	}
	printf("%d",tem);
	return 0;
}
