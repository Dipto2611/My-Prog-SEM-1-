// //TO FIND NTH TERM OF FIBBONACI SEQ.

// #include<stdio.h>


// int fibbo(int n){
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }

//     int fibNm1=fibbo(n-1);
//     int fibNm2=fibbo(n-2);
//     int fibN=fibNm1+fibNm2;
//     return fibN;
// }


// int main(){
//     int n;
//     printf("Enter the no you want:");
//     scanf("%d",&n);
//     printf("The reqd fibbonaci term is %d",fibbo(n));
// }


#include<stdio.h>

int fibbo(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibbo(n - 1) + fibbo(n - 2);
}

int main() {
    int n;
    int res;
    printf("Enter the number of Fibonacci terms you want: ");
    scanf("%d", &n);
    printf("The required Fibonacci terms are: ");
    for (int i = 0; i < n; i++) {
        res=fibbo(i);
    }
    printf("%d",res);
    return 0;
}