#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int a = 0;
    int b = 0;
    for(int i = 0;i<n;i++){
        if(arr[i]%2==0){
            a++;
        }
        else{
            b++;
        }
}
printf("%d %d",a,b);
}
