    #include <stdio.h>

    int main(){

        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i = 0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        for(int i = 0;i<n;i++){
        int a = 0;
            for(int j = i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    int temp = arr[i];
                    a++;
                }
            }
            printf("%d %d",temp,a );
        }
    }