#include<stdio.h>
int main()
{
	char c;
	printf("Enter a character to check");
	scanf("%c",&c);
	if( (c>='a' && c<='z') || (c>='A' && c<='Z') )
		printf("\nAlphabet");
	else
		printf("\nNot an Alphabet");
return 0;
}
