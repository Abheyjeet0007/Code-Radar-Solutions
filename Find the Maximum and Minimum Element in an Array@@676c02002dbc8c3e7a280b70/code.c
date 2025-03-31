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
    int max = INT_MAX;
    for(int j = 0;j<n;j++){
        if(arr[j]<max){
            max = arr[j];
            int max =  arr[j];
        }
    }
    printf("%d ",max);
    printf("%d",min);
}