#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int ag,sta;
    scanf("%d%d",&ag&,&sta);
    if(ag>=18 && sta == 1){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}