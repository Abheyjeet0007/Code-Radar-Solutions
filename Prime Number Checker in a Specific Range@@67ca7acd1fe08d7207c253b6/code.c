#include <stdio.h>
int printPrimesInRange(int a,int b){
    if(a<=0){
        a = 2;
    }
    for(int i = a;i<=b;i++){
            for(int j = a;j<b;j++){
                if(j%i==0){

                printf("%d ",i);
                }
            }
        
            }
        }
    