#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    float sum = (a + b + c) / 3.0;
    printf("Average: %.2f",sum);
    return 0;
}
