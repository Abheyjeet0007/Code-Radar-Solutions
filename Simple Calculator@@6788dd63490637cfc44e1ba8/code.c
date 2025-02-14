// Your code here...
int n,m;
char c;
scanf("%d %d %c",&n,&m,&c);
if(c=='*'){
    printf("%d%d",n*m);
}
else if(c == '/'){
    printf("%d%d",n/m);
}
else if(c == '+'){
    printf("%d%d",n+m);
}
else if(c == '-'){
    printf("%d%d",n-m);
}
