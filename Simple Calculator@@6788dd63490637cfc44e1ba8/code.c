// Your code here...
#include<stdio.h>

int main(){
    int n,m;
    char c;
    scanf("%d %d %c",&n,&m,&c);

    if(c=='*'){
        printf("%d",a*b);
    }
    else if(c == '/'){
        printf("%d",a/b);
    }
    else if(c == '+'){
        printf("%d",a+b);
    }
    else if(c == '-'){
        printf("%d",a-b);
    }
    return 0;
}