#include <stdio.h>

void doWork(int a, int b, int *sum, int *prod, int *avg) {

    *sum = a+b;
    *prod = a*b;
    *avg = (a+b)/2;
}

int main() {
 int x= 8,y= 2;
 int s,p,a;
 doWork(x,y,&s,&p,&a);

 printf("sum = %d, \nprod = %d, \navg = %d\n",s,p,a);

 
}

