#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int c;
    scanf("%d",&c);
    if(c<=97&&c>=122){
        printf("Lowercase");
    }
    else{
        printf("Uppercase");
    }
    return 0;
}