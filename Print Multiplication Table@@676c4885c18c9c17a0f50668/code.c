#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int N;
    scanf("%d",&N);
    for(int i = 1;i<=10;i++){
        int sum = N*i;
        printf("%d x %d = %d",N,i,N*i);
    }
    printf("\n");
    return 0;
}