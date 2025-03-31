#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    // for(int i = 1;i<=n;i++){
    //     for(int j = 1;j<=n-i;j++){
    //         printf(" ");

    //     }
    //     for(int k = 1;k<=i*2-1;k++){
    //         printf("*");
    //     }
    // printf("\n");
    // }

    for(int i = n;n>i;i--){
        for(int j = 1;j<=j*2-1;j++){
            printf("*");
        }
    printf("\n");
    }
    return 0;
}