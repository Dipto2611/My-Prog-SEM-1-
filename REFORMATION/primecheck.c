// #include<stdio.h>
// int main(){
//     int n;
    
//     printf("Enter no:");
//     scanf("%d",&n);
    
//     for(int i=2;i<n;i++){
//         if(n%i == 0){
//         printf("Its not a prime");
//         }
//        else{
//             printf("its a prime ");
//         }
//     }
// }


#include<stdio.h>
int main(){

int n;


printf("Enter the number\n");
scanf("%d",&n);


int flag=1;
int i;
    if(i<2){
    flag=0;
    }

    for(i=2;i<n;i++){
    if(n%i==0){
        flag=0;
        break;
    }else{
        flag=1;
    }
  }

 if(flag==0){
    printf("It is not a prime number\n");
 }else{
    printf("It is a prime number");
 }

}