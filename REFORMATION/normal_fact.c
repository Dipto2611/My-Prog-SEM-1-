#include<stdio.h>
int main(){
    int n;
    printf("Enter a no:");
    scanf("%d",&n);

    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    // int i=1;
    // while(i<=n){
    //     fact=fact*i;
    //     i++;
    // }
    printf("Fact is %d",fact);
}