#include<stdio.h>
#include<limits.h>
int main(){
int n;
scanf("%d",&n);
int arr[n];
int min = INT_MIN;
for(int i = 0;i<n;i++){
    scanf("%d",&arr[i]);

}
for(int i = 0;i<n;i++){
    if(min<arr[i]){
        min = arr[i];
        
    }
}
    printf("%d",min);

}