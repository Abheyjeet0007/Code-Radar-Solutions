#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char c[20],d[20];
    scanf("%s%s",&c,&d);
    printf("You entered: %s and %s",c,d);
    return 0;
}