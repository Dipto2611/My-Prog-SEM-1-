#include <stdio.h>

int main() {
    int a, b, temp;

    // Input two numbers
    printf("Enter 1st numbers\n");
    scanf("%d",&a);
    printf("Enter 2nd numbers\n");
    scanf("%d",&b);


    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swapping using a third variable
    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
