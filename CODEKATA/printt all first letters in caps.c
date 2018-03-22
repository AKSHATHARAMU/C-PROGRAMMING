#include <stdio.h>
#include<string.h>
int main(void) {
	int n,i,len;
	char str[100];
	scanf("%[^\t\n]s",str);
	len=strlen(str);
	str[0]=str[0]-32;
	for(i=1;i<len;i++)
	{
		if(str[i]==' ')
		{
			str[i+1]=str[i+1]-32;
		}
	}
	printf("%s",str);
	return 0;
}
