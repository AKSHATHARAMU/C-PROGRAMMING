#include<stdio.h>
int largest(int n,int array[]);
void main()
{
 int lar,n,array[100],i,l;
 printf("Enter the number of elements");
 scanf("%d",&n);
 printf("\nenter the elements ina na array");
 for(i=0;i<n;i++)
 {
 scanf("%d",&array[i]);
 }
 l=largest(n,array);
 printf("\n largest number is %d",l);
}
 int largest(int n,int array[])
 {
 int lar,i;
 lar=array[0];
 for(i=0;i<n;i++)
 {
 if(array[i]>lar)
 {
 lar=array[i];
 }
 }
 return lar;
 }
