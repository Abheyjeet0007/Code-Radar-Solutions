#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int sum,count,number;
    scanf("%d",&number);
    sum = 0;
    count = 0;
    if(number%number==1){
        count = 1;
    }
    if(count==1){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}