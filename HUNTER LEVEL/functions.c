#include<stdio.h>
int max(int n1,int n2);
void main()
{
	int a,b,ret;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	ret=max(a,b);	
	printf("\n max value is %d",ret);
}
int max(int n1,int n2)
{int result;
 if(n1>n2)
 {
 	result=n1;
 }
 else
 {
 	result=n2;
 }
 return result;
 }
