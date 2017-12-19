#include<stdio.h>
void main(int argc,char *argv[])
{
printf("the first program is %s",argv[0]);
if(argc==2)
{
	printf("\nthe string is %s",argv[1]);
}
else if(argc>2)
{
	printf("\nthe string is not accepted");
}
else
{
	printf("\none string is accepted");
} 
}
