#include<stdio.h>
#include<limits.h>
int main(){
int n;
scanf("%d",&n);
int arr[n];
int min = INT_MIN;
int min1 = INT_MIN;
for(int i = 0;i<n;i++){
    scanf("%d",&arr[i]);

}
for(int i = 0;i<n;i++){
    if(min<arr[i]){
        min = arr[i];
        
    }
}
for(int i = 0;i< n ; i++){
    if(min1<arr[j]&&arr[j]<arr[i]){
        min1 = arr[j];
    }
}
    printf("%d",min1);

}