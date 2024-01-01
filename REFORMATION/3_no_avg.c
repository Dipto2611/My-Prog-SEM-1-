//Write a program to print the average of 3 numbers.
#include<stdio.h>

int main(){
 int a,b,c,avg;    
    printf("Enter 1st no:\n");
    scanf("%d",&a);

    printf("Enter the 2nd no:\n");
    scanf("%d",&b);

    printf("Enter the 3rd no:\n");
    scanf("%d",&c);

   
    avg= (a+b+c)/3;
    printf("Average is %d",avg);

}