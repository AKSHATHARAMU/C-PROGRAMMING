#include <stdio.h>

int main(void) {
	int hr1,hr2,m1,m2,minu1,minu2,sum,sum2,hour,minute,diff;
	scanf("%d%d%d%d",&hr1,&m1,&hr2,&m2);
	minu1=hr1*60;
	minu2=hr2*60;
	sum=minu1+m1;
	sum2=minu2+m2;
	diff=sum2-sum;
	hour=diff/60;
	minute=diff%60;
	printf("%d:%d",hour,minute);
	return 0;
}
