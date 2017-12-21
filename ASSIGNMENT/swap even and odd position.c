#include <stdio.h>

int main(void) {
	// your code goes here
	char str[20],temp;
	int len,i;
	scanf("%s",str);
	len=strlen(str);
	if(len%2==0)
	{
	for(i=0;i<len;i+=2)
	{
		temp=str[i];
		str[i]=str[i+1];
		str[i+1]=temp;
	}
	}
	else
	{
		for(i=0;i<len-1;i+=2)
		{
			temp=str[i];
			str[i]=str[i+1];
			str[i+1]=temp;
		}
	}
	printf("%s",str);
	return 0;
}
