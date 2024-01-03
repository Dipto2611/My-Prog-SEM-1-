#include<stdio.h>
int main(){

int n;

printf("How many elements do you wanna enter \n");
scanf("%d",&n);

int a[n],i,sum=0;

//Input
    printf("Enter the elements in array\n");

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    ///for sum 
    for(i=0;i<n;i++){
         sum=sum+a[i];
    }
printf("Sum of the elements in the array is = %d",sum);
}