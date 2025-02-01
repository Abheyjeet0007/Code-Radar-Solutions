#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d",&a,&b);
    if(a<b){
        printf("Loss");
    }
    else if(a==b){
        printf("No Profit No Loss");
    }
    else{
        printf("Profit");
    }
    return 0;
}