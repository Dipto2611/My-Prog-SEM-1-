#include <stdio.h>

void mul(int a,int b,int *answer)
{
 *answer= a*b;

}


int main(){
 int a,b;
 int ans;
 printf("Enter 1st no:\t");
 scanf("%d",&a);
 printf("Enter 2nd no:\t");
 scanf("%d",&b);

 mul(a,b,&ans);
 printf("Ans is %d",ans);
}