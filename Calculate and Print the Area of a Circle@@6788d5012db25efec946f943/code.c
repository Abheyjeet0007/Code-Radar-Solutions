#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float pai;
    pai = 3.14;
    float r;
    scanf("%f",&r);
    float sum = pai*r*r;
    printf("Area: %f",sum);
        return 0;
}