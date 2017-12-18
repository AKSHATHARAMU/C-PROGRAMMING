#include<stdio.h>
void main()
{
	int a,b;
	float sum,sub,mul,div,mod;
	printf("Enter the two number");
	scanf("%d%d",&a,&b);
	sum=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	mod=a%b;
	printf("\n The sum is %f",sum);
	printf("\n The sub is %f",sub);
	printf("\n The mul is %f",mul);
	printf("\n The div is %f",div);
	printf("\n The mod is %f",mod);
}
