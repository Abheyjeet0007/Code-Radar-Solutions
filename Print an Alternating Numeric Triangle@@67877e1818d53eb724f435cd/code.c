#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
   int n;
   scanf("%d",&n);
   for(int i =1;i<=n;i++){
    int a= 0;
    if(a%2!=0){
        a=1;
    }
    else{
        a=0;

    }
    for(int j=1;j<=i;j++){
        printf("%d ",a);
        if(a==1){
            a=0;
        }
        else{
            a=1;
        }
    }
        printf("\n");
   }
    return 0;
}