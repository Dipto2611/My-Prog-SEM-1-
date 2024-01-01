//Write a program to calculate perimeter of rectangle ,Take sides, a & b, from the user.

#include<stdio.h>
int main(){
    int a;
    int b;
    printf("Enter 1st side:");
    scanf("%d",&a);
    printf("Enter 2nd side:");
    scanf("%d",&b);

    printf("The perimeter of the rect is %d", 2*(a+b));
}