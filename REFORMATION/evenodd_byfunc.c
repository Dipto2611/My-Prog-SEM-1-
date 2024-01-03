#include <stdio.h>

void EvenOdd(int n) {
    if (n % 2 == 0) {
        printf("%d is an even number.\n", n);
    } else {
        printf("%d is an odd number.\n", n);
    }
}

int main() {
    int n;
    // Input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Call the function to check even or odd
    EvenOdd(n);

    
}
