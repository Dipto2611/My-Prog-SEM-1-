#include<stdio.h>
int main(){
int a[2][3],b[2][3],c[2][3],sum,i,j;

//input the matrix 
printf("Enter elements of first matrix\n");
for(i=0;i<2;i++){
    for(j=0;j<3;j++){
        scanf("%d",&a[i][j]);
    }
}
//print first matrix 
printf("First matrix is\n");
for(i=0;i<2;i++){
    for(j=0;j<3;j++){
        printf("%d\t",a[i][j]);
    }
    printf("\n");

}
//input second matrix 
printf("Enter elements of second matrix\n");
for(i=0;i<2;i++){
    for(j=0;j<3;j++){
        scanf("%d",&b[i][j]);
    }
}
//printing second matrix 
printf("Second matrix is :\n");
for(i=0;i<2;i++){
    for(j=0;j<3;j++){
        printf("%d\t",b[i][j]);
    }
    printf("\n");
}
//sum
printf("Sum of above matrices are\n\n");
for(i=0;i<2;i++){
    for(j=0;j<3;j++){
        c[i][j]=a[i][j]+b[i][j];
        printf("%d\t",c[i][j]);
    }
    printf("\n");
}
// printf("Transpose of the above matrix is \n");
// for(i=0;j<5;i++){
//     for(j=0;i<5;j++){
//         printf("%d\t",c[j][i]);
//     }
//     printf("\n");
// }
}

