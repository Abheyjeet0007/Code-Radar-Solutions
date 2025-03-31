#include <stdio.h>
void reverse(int arr[],int str,int end){
    for(int i = str,j=end;i<j;i++,j--){
        int temp = arr[i];
        arr[i]= arr[j];
        arr[j]=arr[i];
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int k;

    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    scanf("%d",&k);
    reverse(arr[n],k,n-1);

}