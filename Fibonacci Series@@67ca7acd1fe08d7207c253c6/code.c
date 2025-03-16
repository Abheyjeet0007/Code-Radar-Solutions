int fibonacciSeries(int x){
    int a = 0;
    int b = 1;
    for(int i = 1;i<=x;i++){
        printf("%d",a);
        int temp = a;
        a = b;
        b = temp+b;

    }
}