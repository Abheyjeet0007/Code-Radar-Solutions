#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int sum,count,number;
    scanf("%d",&number);
    sum = 0;
    count = 0;
    for(int i = 0;i<=number;i++){

    
    if(number%i==1){
        count = 1;
    }
    }
    if(count==1){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}