#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a,b;
    scanf("%f%f",&a,&b);
    float c = a+b;
    printf("Product: %.2f\n",c);

    return 0;
}