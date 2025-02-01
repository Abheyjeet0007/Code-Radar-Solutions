#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int number,count;
    scanf("%d",&number);
    if(number<2){
        printf("Not Prime");
        return 0;
    }
    for(int i = 1;i<=number;i++){
        if(number%i==0){count++;
        }
    }
    if(count == 2){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}