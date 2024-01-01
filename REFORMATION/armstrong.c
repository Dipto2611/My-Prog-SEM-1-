#include <stdio.h>
//#include <math.h>
int main(){
int n,s;

    printf("Enter the no:\n");
    scanf("%d",&n);
    int orgno = n;
    int cube;
    int sum=0;
    while(n){
    s=n%10;
    printf("%d\n",s);
    n=n/10;
    
    cube = s*s*s;
    printf("%d",cube);
    sum=sum + cube;
    }
 printf("\nSum is %d", sum);
 printf("\n");

    if(sum==orgno){
        printf("its armstrng");
    } else{
        printf("it is not armstrng");
    }
    
    
}