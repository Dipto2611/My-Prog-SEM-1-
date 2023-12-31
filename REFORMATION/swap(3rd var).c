#include <stdio.h>

void swap(int *a, int *b) {
    int  temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;

    // Input two numbers
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swapping using pointers.
    swap(&a, &b);

    printf("After swapping: a = %d, b = %d\n", a, b);

  
}
