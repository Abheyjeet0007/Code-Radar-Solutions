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
for(int i = 0;i<n-1;i++){
    if(arr[i]==arr[n-1]||n==2){
        printf("-1");
        return 0;
    }
}
for(int i = 0;i<n;i++){
    if(min<arr[i]){
        min = arr[i];
        
    }
    }
 
for(int j = 0;j< n ; j++){

    if(min1<arr[j]&&arr[j]<min){
        min1 = arr[j];
    }
}
    printf("%d",min1);
return 0;
}