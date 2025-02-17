#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    for(int = 1;i<=n;i++){
        for(int j = 1;j<=n-i;j++){
            printf(" ");
        }
        int a = 1;
        for(int k = 1;k<=a;k++){
            printf("*");
            a = a+2;
        }
    }
    return 0;
}

   *
  **
 ***
****