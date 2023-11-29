///greatest among two
#include<stdio.h>

void large(int a,int b,int c,int d,int e)
{
    if(a>b)
    {
      printf("%d this is greater",a); 
    }
    else if (b>c)
    {
        printf("%d is greater",b);
    }
    else if(c>d)
    {
        printf("%d is greater",c);
    }
    else if(d>e)
    {
        printf("%d is greater",d);
    }
    else
    {
        printf("%d is greater",e);
    }
}


int main()
{
int a,b,c,d,e;
printf("Enter the 1st no",a);
scanf("%d",&a);
printf("Enter the 2nd no",b);
scanf("%d",&b);
printf("Enter the 2nd no",c);
scanf("%d",&c);
printf("Enter the 2nd no",d);
scanf("%d",&d);
printf("Enter the 2nd no",e);
scanf("%d",&e);

large(a,b,c,d,e);
}

