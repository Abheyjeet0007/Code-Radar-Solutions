#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        int a = 1;
        for(int j = 1;j<=n-i;j++){
            printf(" ");
        }
        for(int k = 1;k<=(i);k++){
            printf("%d",k);
            a++;
        }
        int b = i-i;
        for(int l = 1; l<i-1;l++){
            printf("%d",b);
            b--;
        }
        printf("\n");
    }
    return 0;
}


