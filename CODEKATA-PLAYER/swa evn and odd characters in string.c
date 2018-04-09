#include <stdio.h>
#include <string.h>
int main(void) {
	char s[100],s2;
	int i,j,len;
	gets(s);
	len=strlen(s);
	if(len%2==0)
	{
	for(i=0;i<len;i=i+2)
	{
		s2=s[i];
		s[i]=s[i+1];
		s[i+1]=s2;
	}
	puts(s);
	}
	else
	{
		for(i=0;i<len-1;i++)
		{
			s2=s[i];
			s[i]=s[i+1];
			s[i+1]=s2;
		}
		puts(s);
	}
	return 0;
}
