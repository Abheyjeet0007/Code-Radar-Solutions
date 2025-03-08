#include <stdio.h>
int isprime(int x){
    int sum = 0;
    for(int i = 2;i<x;i++){
        if(x%i==0){
            sum=1;
        }
    if(sum = 1){
        printf("1");
    }
    else{
        printf("0");
    }
    return sum; 
    }


int main(){
    int a;
    scanf("%d",&a);
    int x = isprime(a);

    return 0;
}
}