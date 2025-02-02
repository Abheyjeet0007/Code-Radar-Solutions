#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    for(int i = n;i<=n;i++){
        printf("*");
        printf("\n");
    }

    return 0;
}