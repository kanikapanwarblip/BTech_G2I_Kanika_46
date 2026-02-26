/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
int n,sum ;

    printf("enter a number :");
scanf("%d",&n);
sum = n*(n+1)/2;
printf("enter the sum of natural numbers up to %d is %d", n, sum );
    return 0;
}