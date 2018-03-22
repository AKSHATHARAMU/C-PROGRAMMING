#include <stdio.h>
#include<string.h>
int main(void) {
	int i,N,len;
	char S[100];
	scanf("%s",S);
	scanf("%d",&N);
	len=strlen(S);
	for(i=(len)-N;i<=len;i++)
	{
		printf("%c",S[i]);
	}
	return 0;
}

