#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a;
    scanf("%f",&a);
    printf("You entered: %.4f",2*a);
    return 0;
}