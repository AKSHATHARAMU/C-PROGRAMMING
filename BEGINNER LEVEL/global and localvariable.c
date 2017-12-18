#include<stdio.h>

int global = 100;          // global variable declared

void main()

{

   int local = 10;         // local variable declared

   printf("Global variable is %d",global);

   printf("Local variable is %d",local);

   int func1();

}

int func1()

{

   printf("Global inside func1 is %d",global); // Would print the global variable successfully.

}
