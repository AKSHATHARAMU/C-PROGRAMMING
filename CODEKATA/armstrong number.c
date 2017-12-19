#include<stdio.h>
#include<math.h>
int main()
{
int arn,n=0,n1,rem,result=0;
scanf("%d",&n1);
arn=n1;
while(arn!=0)
{
	arn=arn/10;
	n++;
}
arn=n1;
while(arn!=0)
{
	rem=arn%10;
	result=result+pow(rem,n);
	arn=arn/10;
}
if(result==n1)
printf("\nArmstrong number");
else
printf("not an armstrong number");

return 0;
}
