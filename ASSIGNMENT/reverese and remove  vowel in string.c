#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	char str[20],s[20];
	int len,i,j=0;
	gets(str);
	len=strlen(str);
	for(i=len-1;i>=0;i--)
	{
		printf("%c",str[i]);
	}
	for(i=len-1;i>=0;i--)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		{
			str[i]=' ';
		}
		else
		s[j++]=str[i];
	}
	s[j]='\0';
	printf("\n%s",s);
	return 0;
}
