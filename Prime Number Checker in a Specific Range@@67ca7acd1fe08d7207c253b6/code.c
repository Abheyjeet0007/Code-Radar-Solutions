#include<stdio.h>




int printPrime(int x){
    if(x<=1){
        return 0;
    }
    for(int i = 2;i<x;i++){
        if(x%i==0){
            return 0; 
        }
        return 1;
    }
    
} 
void printPrimesInRange(int x,int y){
    for(int j=x;j<=y;j++){
        if(printPrime(j)){
        printf("%d ",j);
    }
}
}
        