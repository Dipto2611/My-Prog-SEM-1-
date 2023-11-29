#include <stdio.h>
int main()
{
    int a[5],i,size,position,number;
    printf("Enter size of array:");
    scanf("%d",&size);
    printf("Enter the element in array:\n");
    for (i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the new data:");
    scanf("%d",&number);
    printf("Enter the positon:");
    scanf("%d",&position);
    for (i=size-1;i>=position-1;i--)
    {
        a[i+1]=a[i];
    
    }

    a[position-1]=number;
    size++;
    for(i=0;i<size;i++)
    {
    printf("%d\t",a[i]);
    }
}


