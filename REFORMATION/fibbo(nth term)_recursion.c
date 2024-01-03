//TO FIND NTH TERM OF FIBBONACI SEQ.

#include<stdio.h>


int fibbo(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    int fibNm1=fibbo(n-1);
    int fibNm2=fibbo(n-2);
    int fibN=fibNm1+fibNm2;
    return fibN;
}


int main(){
    int n;
    printf("Enter the no you want:");
    scanf("%d",&n);
    printf("The reqd fibbonaci term is %d",fibbo(n));
}