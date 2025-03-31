    #include <stdio.h>

    int main(){

        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i = 0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        for(int i = 0;i<n;i++){
        int temp;
        int a = 0;
            for(int j = 0;j<n;j++){
                if(arr[i]==arr[j] && i!=j){
                    temp = arr[i];
                    a+=1;
                }
            }
            printf("%d %d\n",temp,a );
        }
    }