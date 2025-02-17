#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        for(int q = 1; q<=n-i;q++){
            printf(" ");
        }
        for(int j = 1; j<=2*n-1;j++){
            printf("*");
        }
    }
    
        return 0;
}