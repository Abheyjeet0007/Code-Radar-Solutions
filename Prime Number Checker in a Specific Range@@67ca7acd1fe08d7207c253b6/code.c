#include <stdio.h>
int printPrimesInRange(int a,int b){
    for(int i = a;i<=b;i++){
        for(int j =a;j<i;j++){
            if(i%j!=0){
                printf("%d ",j);
        
            }
        }
    }
}