#include<stdio.h>
int n;
void reverse(int n){
    int r, rev=0;
    while(n>0){
    r=n%10;
    n=n/10;
    rev=rev*10+r;
    }
    printf("Reqd no is %d",rev);
}





int main(){
 
 printf("Enter the no:");
 scanf("%d",&n);

    reverse(n);
 

}