#include<stdio.h>
void reverse(int arr[],int str,int end){

    for(int i=str,j=end;i<j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }

}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int x;
    
    scanf("%d",&x);
    if(x==n){
        for(int i = 0;i<7;i++){
            printf("%d ",arr[i]);
        }
    }
    else if(x>n){
        x=x%n;
    
    
 
        reverse(arr,0,n-1);
        reverse(arr,0,x-1);
        reverse(arr,x,n-1);
        for(int i = 0;i<n;i++){
            printf("%d ",arr[i]);
        }
}
    return 0;
}