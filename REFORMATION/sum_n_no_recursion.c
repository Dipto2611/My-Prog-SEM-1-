#include<stdio.h>

int sum(int n){
    if(n==1){
        return 1;
    }else{
        return sum(n-1)+n;
    }
}

int main(){
   int n;
    printf("Enter the no:");
    scanf("%d",&n);

    printf("the sum is %d",sum(n));
}