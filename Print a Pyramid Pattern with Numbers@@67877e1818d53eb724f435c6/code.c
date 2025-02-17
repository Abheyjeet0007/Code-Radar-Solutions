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
        int a = 1;
        for(int j = 1; j<=i;j++){
            printf("%d",a);
            a++;
        }
        printf("\n");
    }
    
        return 0;
}