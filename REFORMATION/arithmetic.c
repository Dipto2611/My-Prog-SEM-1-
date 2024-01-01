//All symbols of maths are used
#include<stdio.h>
int main(){
  int arsum[4];  
 int a,b,sum,mul,sub,div;    
    printf("Enter 1st no:\n");
    scanf("%d",&a);

    printf("Enter the 2nd no:\n");
    scanf("%d",&b);

    sum=a+b;
    printf("Sum is %d\n",sum);

    sub=a-b;
    printf("sub is %d\n",sub);

    mul=a*b;
    printf("mul is %d\n",mul);

    div=a/b;
    printf("div is %d\n",div);
}
//     arsum[0]=sum;
//     arsum[1]=sub;
//     arsum[2]=mul;
//     arsum[3]=div;

//     int i;
//     for(i=0;i<4;i++){
//         printf("%d\t",arsum[i]);
//     }
// }


