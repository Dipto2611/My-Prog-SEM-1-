#include <stdio.h>
int main(){
    int n;
    printf("Enter the no:");
    scanf("%d",&n);
    
    int sum=0;
    for(int i=0;i<=n;i++){
       sum=sum+i;
    }
    printf("Sum is %d",sum);


}