#include<stdio.h>
#inlcude<limits.h>
int n;
scanf("%d",&n);
int arr[n];
int min 
for(int i = 0;i<n;i++){
    scanf("%d",&arr[i]);

}
for(int i = 0;i<n;i++){
    if(min<arr[i]){
        min = arr[i];
        
    }
    printf("%d",min);
}