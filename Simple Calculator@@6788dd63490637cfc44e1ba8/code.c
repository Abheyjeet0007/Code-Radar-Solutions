// Your code here...
#include<stdio.h>
int main(){


    int n,m;
    char c;
    int a = n/m;
    int b = n*m;
    int c = n+m;
    int d = n-m;
    scanf("%d %d %c",&n,&m,&c);
    if(c=='*'){
        printf("%d",b);
    }
    else if(c == '/'){
        printf("%d",a);
    }
    else if(c == '+'){
        printf("%d",c);
    }
    else if(c == '-'){
        printf("%d",d);
    }
    return 0;
}