#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    int a = (n/2)+1;
    for(int i = 1;i<=a;i++){
        for(int j = 1;j<=a-i;j++){
            printf(" ");
        }
        for(int k = 1;k<=2*i-1;k++){
            printf("*");
        }
    }
    return 0;
}