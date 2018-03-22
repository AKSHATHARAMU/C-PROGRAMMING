#include <stdio.h>
#include<string.h>
int main(void) {
	float n1,n2,n3,num;
	int res;
	scanf("%f%f%f",&n1,&n2,&n3);
	num=n1/n2;
	res=num*n3;
	printf("%d",res);
	return 0;
}
