// Your code here...
#include<stdio.h>
int main(){
    int n,m;
    char c;

    
    int k = n/m;
    int l = n*m;
    int m = n+m;
    int n = n-m;
    scanf("%d %d %c",&n,&m,&c);
    int a = n/m;
    int b = n*m;
    int e = n+m;
    int d = n-m;
    if(c=='*'){
        printf("%d",b);
    }
    else if(c == '/'){
        printf("%d",a);
    }
    else if(c == '+'){
        printf("%d",e);
    }
    else if(c == '-'){
        printf("%d",d);
    }
    return 0;
}