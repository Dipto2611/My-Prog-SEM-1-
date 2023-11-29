///rev of func///
#include <stdio.h>
int a[10],i;
int rev()
{
    for(i=9;i>=0;i--)
    {
    
        printf("%d\t",a[i]);
    }
}

int main()
{
    printf("Enter the no:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
rev();
}