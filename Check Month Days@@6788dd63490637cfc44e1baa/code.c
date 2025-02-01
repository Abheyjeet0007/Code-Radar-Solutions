#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    if(a==1){
        printf("31");
    }
    else if(a == 2){
        printf("28");
    }
    return 0;
}