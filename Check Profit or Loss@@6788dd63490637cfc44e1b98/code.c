#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d",&a,&b);
    if(a<b){
        printf("loss");
    }
    else{
        printf("Profit");
    }
    return 0;
}