#include<stdio.h>
void main()
{
int original,reverse=0,n,rem;
printf("Enter the number to reverse");
scanf("%d",&n);
original=n;
while(n!=0)
{
	rem=n%10;
	reverse=reverse*10+rem;
	n=n/10;
}
if(original==reverse)
printf("\nPalindrome");
else
printf("\nNot Palindrome");
} 
