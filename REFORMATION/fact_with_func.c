#include<stdio.h>
void factorial(int n){

int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }

    printf("Fact is %d",fact);
    
}

int main(){
    int n;
    printf("Enter a no:");
    scanf("%d",&n);
    factorial(n);
   

}
   
    