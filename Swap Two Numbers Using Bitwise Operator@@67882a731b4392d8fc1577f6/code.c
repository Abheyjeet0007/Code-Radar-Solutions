#include <stdio.h>

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int k = n;
    int n = m;
    int m = k;
    printf("%d %d",n,m);
}