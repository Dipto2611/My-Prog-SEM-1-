//print 0 to n using while loop

#include <stdio.h>
int main(){
    int num;
    printf("Enter a no:");
    scanf("%d",&num);

    int i=0;
    while(i<num){
        printf("%d\n",i);
        i++;
    }
   
}

// // for FOR loop we used this one:-
//   for (int i=0;i<=num;i++){
//         printf("%d\n",i);
//     }
 
