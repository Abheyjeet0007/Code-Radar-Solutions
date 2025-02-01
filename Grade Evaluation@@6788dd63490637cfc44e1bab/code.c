#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    scanf("%d",&a);
    if(a=='A'){
        printf("Excellent");
    }
    else if('B'){
        printf("Good");
    }
    else if('C'){
        printf("Average");
    }
    else if('D'){
        printf("Below Average");
    }
    else if('F'){
        printf("Fail");
    }
    else{
        printf("Invalid grade");
    }
    
    return 0;
}