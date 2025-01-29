#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x;
    scanf("%d",&x);
    printf("Hexadecimal %X\n",x);
    printf("Hexadecimal %o\n",x);
    return 0;
}