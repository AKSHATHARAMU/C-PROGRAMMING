#include <stdio.h>
#include<string.h>
int main(void) {
	char str1[100],str2[100],temp[100];
	int n1,n2,i,j;
	scanf("%s",str1);
	scanf("%s",str2);
	n1=strlen(str1);
	n2=strlen(str2);
	for(i=0,j=0;i<n1;i++,j++)
	{
		if(str1[i]>str2[j])
		{
			temp[i]=str1[i];
		}
		else if(str1[i]<str2[j])
		{
			temp[i]=str2[j];
		}
		else
		{
			temp[i]=str1[i];
		}
	}
	printf("%s",temp);
	return 0;
}
