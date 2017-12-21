#include<stdio.h>
#include<math.h>
int main(void)
{
int n=0,rem,result=0,r1,r2,temp1,temp2,i;
scanf("%d%d",&r1,&r2);
for(i=r1+1;i<r2;++i)
{
	temp1=i;
	temp2=i;
while(temp1!=0)
{
	temp1=temp1/10;
	++n;
}
while(temp2!=0)
{
	rem=temp2%10;
	result=result+pow(rem,n);
	temp2=temp2/10;
}
if(result==i)
{
printf("%d\n",i);
}
n=0;
result=0;
}
return 0;
}
