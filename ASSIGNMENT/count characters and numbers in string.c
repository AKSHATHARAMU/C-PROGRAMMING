#include <stdio.h>

int main(void) {
	// your code goes here
	char str[50];
	int digit=0,alph=0,i;
	scanf("%s",str);
	for(i=0;str[i]!=NULL;i++)
	{
		if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
		digit++;
		else if(str[i]>='1' && str[i]<='9')
		alph++;
	}
	printf("Digits:%d\nAlphabets:%d",digit,alph);
	return 0;
}
