/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
int age;
printf("enter age:");
scanf("%d",& age);
if(age <= 12){
    printf("category: child\n");
}
    else if (age <= 18 ){
    printf("category: teenager\n");
    }
else if (age <= 60){
    printf("category: adult\n");
}
    else if (age > 60){
 printf("category: senior citizen\n");      
    }
   return 0;
   }
