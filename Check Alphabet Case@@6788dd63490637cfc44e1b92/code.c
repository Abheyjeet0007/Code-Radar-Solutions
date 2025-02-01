#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char c;
    scanf("%c",&c);
    if(c<=A&&c>=Z){
        printf("Lowercase");
    }
    else{
        printf("Uppercase");
    }
    return 0;
}