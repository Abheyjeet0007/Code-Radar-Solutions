#include <stdio.h>

int isprime(int x) {
    if (x < 2) {
        return 0; // Numbers less than 2 are not prime
    }
    for (int i = 2; i * i <= x; i++) { // Check up to √x
        if (x % i == 0) {
            return 0; // Not a prime number
        }
    }
    return 1; // Prime number
}

int main() {
    int num;
    scanf("%d", &num);
    printf("%d\n", isprime(num));
    return 0;
}

