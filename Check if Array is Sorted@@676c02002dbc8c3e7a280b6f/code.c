#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int a = 0;
    for(int i = 0;i<n;i++){
        if(arr[i]<=arr[n-1]){
            a++;
        }
    }
    if(a==n){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
    
    
    
}