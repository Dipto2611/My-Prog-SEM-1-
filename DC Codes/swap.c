
#include<stdio.h>

void one(int a , int b){

int *p=&a;
int *q=&b;

*p=*q;

printf("\nthe reqd no is %d",a); ///main part

}
void two(int a, int b){

int *p=&a;
int *q=&b;

*q=*p;
printf("%d",b);
}

int main(){
int a,b;
printf("Enter 1st no:\t");
scanf("%d",&a);
printf("Enter 2nd no:\t");
scanf("%d",&b);

one(a,b);
two(a,b);


}




// #include <stdio.h>
// void f(int x,int y ,int *l);
// int main(){
//  int a=5;
//  int b=10;
//  int sum=78;
//  printf("%d",sum);
//  f(a,b,&sum);
//  printf("%d",sum);
// }

// void f(int x, int y, int *l)
// {
//     *l = x+y;
// }