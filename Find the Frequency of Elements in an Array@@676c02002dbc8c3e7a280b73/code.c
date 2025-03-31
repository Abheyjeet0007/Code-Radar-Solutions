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
        int temp;
            for(int j = i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    temp = arr[i];
                    a++;
                }
            }
            printf("%d %d\n",temp,a );
        }
    }