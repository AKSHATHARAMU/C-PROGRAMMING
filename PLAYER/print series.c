#include<stdio.h>
void main()
{
	int sum=0,t=9,n,i;
	printf("Enter the total number of terms");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d+",t);
		sum=sum+t;
		t=(t*10)+9;
	}
	printf("\n the sum is %d",sum);
}
