//Recursive function to add the numbers till a certain number 

#include <stdio.h>
int addnum(int n){

    int sum;
    if(n==0){
        return 0;
    }else{
        sum = addnum(n-1)+n;
    }

    return sum;
}

int main()  {


int lastnum;

printf("Please enter the last number till which you want to add\n");
scanf("%d",&lastnum);

printf("Sum of the numbers is \n%d\n",addnum(lastnum));



}