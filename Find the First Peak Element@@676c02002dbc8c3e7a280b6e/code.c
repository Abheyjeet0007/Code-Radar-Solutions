#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int a = 0;
    for(int i = 0 ;i<n;i++){
        if(arr[i-1||i]<arr[i]>arr[i+1||n-1]){
            break;
        }
    }
    printf("%d",arr[i]);
}