#include <stdio.h>
int main(){
int a=3;
int b=6;

int *p;
int *q;//**s;
p=&a,q=&b;
*q=*p;

///**s=*p;
printf ("x=%d\nx=%d",a,b);

}