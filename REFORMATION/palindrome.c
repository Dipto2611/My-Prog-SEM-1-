#include<stdio.h>
int main(){
 int n,r,rev=0;
 int orgno; //original no

 printf("Enter the no:");
 scanf("%d",&n);

    orgno=n;

    while(n>0){
    r=n%10;
    n=n/10;
    rev=rev*10+r;
    }


if(orgno==rev){
    printf("%d its a palindrome",orgno);
}else{
    printf("%d its not a palindrome",orgno);
}

}