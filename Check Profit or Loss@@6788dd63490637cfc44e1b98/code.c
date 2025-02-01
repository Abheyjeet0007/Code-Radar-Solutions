#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int buying,selling;
    scanf("%d",&buying,&selling);
    if(buying<selling){
        printf("Profit");
    }
    else if(buying>selling){
        printf("Loss");
    }
    else if(buying==selling){
        printf("No Profit No Loss");
    }
    
    return 0;
}