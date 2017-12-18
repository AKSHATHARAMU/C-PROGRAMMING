#include<stdio.h>
int global=10;
int func();
void main()
{
	int local=20;
	printf("\n the global variable is %d",global);
	printf("\n the local variable is %d",local);
}
int func()
{
	printf("\n the global variable is %d",global);
}
