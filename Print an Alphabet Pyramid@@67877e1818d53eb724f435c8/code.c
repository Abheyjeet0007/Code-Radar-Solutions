#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        int a = 65;
        for(int j = 1;j<=i;j++){
        printf("%c ",a);
        a++;
        }
        printf("\n");
    }
    return 0;
}