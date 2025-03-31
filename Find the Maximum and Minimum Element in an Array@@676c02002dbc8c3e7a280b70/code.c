#include <stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int min = INT_MIN;
    int arr[n];
    for(int k = 0;k<n;k++){
        scanf("%d",&arr[k]);
    }

    for(int i = 0;i<n;i++){
        if(arr[i]>min){
        min =  arr[i];
        }
            
    }
    printf("%d",min);
    int max = INT_MAX;
    for(int j = 0;j<n;j++){
        if(arr[j]<max){
            b = arr[j];
            int max =  arr[j];
        }
    }
    printf("%d",arr[j]);
}