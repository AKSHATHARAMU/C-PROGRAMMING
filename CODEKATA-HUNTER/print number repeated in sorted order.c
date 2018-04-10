#include <stdio.h>

int main(void) {
	int n,a[100],b[100],i,j,temp,count=0,c,k,l;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				b[k]=a[i];
				count=count+1;
				c=count;
				k++;
			}
		}
	}
	if(count==0)
	{
		printf("unique");
	}
	else
	{
	for(k=0;k<c;k++)
	{
		for(l=k+1;l<c;l++)
		{
			if(b[k]>b[l])
			{
				temp=b[k];
				b[k]=b[l];
				b[l]=temp;
			}
		}
	}
	for(k=0;k<c;k++)
	{
		printf("%d ",b[k]);
	}
	}
	
	return 0;
}
