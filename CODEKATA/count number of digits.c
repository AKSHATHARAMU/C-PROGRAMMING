int main(void) {
	char str[100];
	int i,count=0,len;
	gets(str);
	len=strlen(str);
	for(i=0;i<=len;i++)
	{
		if(str[i]>='0' && str[i]<='9')
		{
		count=count+1;
		}
	}
	printf("%d",count);
	return 0;
}
