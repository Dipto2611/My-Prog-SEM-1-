#include <stdio.h>
int main(){
 int n;
 printf("Enter no:");
 scanf("%d",&n);


 for(int i=0;i<=10;i++)
 { 
    int mul=n*i;
    printf("%d x %d = %d\n",n,i,mul);
 }
 

}