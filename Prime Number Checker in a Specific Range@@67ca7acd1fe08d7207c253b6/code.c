#include<stdio.h>




int printPrime(int x){
    if(x<=1){
        return 0;
    }

    for(int i = 2;i<x;i++){
        if(x%i==0){
            return 0; 
        }
    }
        return 1;
        
    
} 
void printPrimesInRange(int x,int y){
    int count = 0; 
    if(x==0 ||y==1){
        printf("No prime numbers");
    }
    for(int j=x;j<=y;j++){
        if(printPrime(j)){
        printf("%d ",j);
        count = 1;
        
    }
        else if(x==y){
            printf("No prime numbers");
        }
        else if(count == 0){
            printf("No prime numbers");
        }


}
}
        