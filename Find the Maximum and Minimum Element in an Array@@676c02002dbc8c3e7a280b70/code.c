#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a = -113842912;
    int arr[n];
    for(int k = 0;k<n;k++){
        scanf("%d",&arr[k]);
    }
    for(int i = 0;i<n;i++){
        if(arr[i]>a){

            a = arr[i];
        }
            int min = arr[i];
    }
    printf("%d",min);
    int b = 98237901537990513;
    for(int j = 0;j<n;j++){
        if(arr[j]<b){
            int max =  arr[j];
            b = arr[j];
        }
    }
    printf("%d",arr[j]);
}