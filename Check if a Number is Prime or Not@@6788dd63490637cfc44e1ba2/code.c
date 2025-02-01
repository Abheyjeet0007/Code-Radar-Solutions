#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int sum,count,number;
    scanf("%d",&number);
    sum = 0;
    count = 0;
    if(number<2){
        printf("Not Prime")
        return 0;
    }
    else{
    for(int i = 1;i<=number;i++){

    
    if(number%i==0){
        count++;
    }
    }
    if(count==2){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    }
    return 0;
}