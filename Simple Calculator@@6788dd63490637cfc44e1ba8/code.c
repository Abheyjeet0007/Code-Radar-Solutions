// Your code here...
int n,m;
char c;
float a = n/m;
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
