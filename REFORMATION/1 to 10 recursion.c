#include<stdio.h>
///1 to 10 rec.
void printNum(int n) {
    if (n <= 10) {
        printf("%d\n", n);
        printNum(n + 1);
    }
}

int main() {
    printNum(1);
    
}
                /// REMEMBER WHENEVER YOU EXECUTE THIS CODE YOU MUST COMMENT OUT THE MAIN TO GET THE REQ VALUES 

///10 to 1 rec.
void prNum(int n) {
    if (n >= 1) {
        printf("%d\n", n);
        prNum(n-1);
    }
}

int main() {
    prNum(10);
    
}
