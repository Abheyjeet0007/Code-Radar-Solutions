#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    int a = 65;
    for(int i =1;i<=n;i++){
        for(int j = 1;j<=n+1-i;j++){
            printf("%c ",a);
            a++;
        }
    }
    return 0;
}