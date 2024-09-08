/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <stdio.h>
int main()
{
   int i=1,n,sum=0;
   printf("enter the value of n:");
   scanf("%d",&n);
   while(i<=n)
   {
       sum=sum+i;
       i++;
   }
   printf("sum= %d",sum);
}