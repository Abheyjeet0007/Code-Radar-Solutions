#include <stdio.h>
int printPrimesInRange(int a,int b){
    for(int i = a;i<=b;i++){
        for(int j =i;j<i;j++){
            if(i%j!=0){
                printf("%d ",j);
        
            }
        }
    }
}