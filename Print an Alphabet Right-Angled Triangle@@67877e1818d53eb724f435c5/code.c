#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    for(int i = 1; i<=n;i++){
        for(int j = 1; j<=i;j++){
            if(j==1){
                printf('A');
            }
            else if(j==2){
                printf('A' 'B');
            }
            else if(j==3){
                printf('A' 'B' 'C');
            }
            else if(j==4){
                printf('A' 'B' 'C' 'D');
            }
            else if(j==5){
                printf('A' 'B' 'C' 'D' 'E');
            }
            else if(j==6){
                printf('A' 'B' 'C' 'D' 'E' 'F');
            }
        }
        printf("\n");
    }
    return 0;
}