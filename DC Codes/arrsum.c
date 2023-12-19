// #include<stdio.h>
// int main(){

//  int n;

//  printf("How many elements do you wanna enter \n");
//  scanf("%d",&n);

//  int a[n],i,sum;

//     //Input

//     printf("Enter the elements\n");

//     for(i=0;i<n;i++){
//     scanf("%d",&a[i]);
//     }
//     for(i=0;i<n;i++){
//     sum=sum+a[i];
//     }
//     printf("Sum of the elements in the matrix is = %d\n",sum);
// }
#include<stdio.h>
int main(){

int n;

printf("How many elements do you wanna enter :\n");
scanf("%d",&n);

int a[n],i,sum;

//Input

printf("Enter the elements\n");

for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
    sum=sum+a[i];
}
printf("Sum of the elements in array is = %d",a[i]);
}