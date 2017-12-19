#include<stdio.h>
int main()
{
int a[100],b[100],c[100],n1,n2,i,j;
printf("enter the no. of elements for set 1");
scanf("\n %d",&n1);
printf("\n enter the elements");
for(i=0;i<n1;i++)
{
	scanf("\n %d",&a[i]);
}
printf("\nenter the no. of elements for set 2");
scanf("\n %d",&n2);
printf("\nenter the elements");
for(i=0;i<n2;i++)
{
	scanf("\n %d",&b[i]);
}
for(i=0;i<n1;i++)
{
c[i]=a[i];
}
for(i=0;i<n2;i++)
{
c[i]=b[i];
}
for(i=n2,j=0;i<n1+n2,j<n1;i++,j++)
{
c[i]=a[j];
}
for(i=0;i<n1+n2;i++)
{
printf("\n %d",c[i]);
}
return 0;
}
