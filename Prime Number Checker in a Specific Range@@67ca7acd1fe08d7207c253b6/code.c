int printPrime(int x){
    int a = 0;
    for(int i = 2;i<x;i++){
        if(n%i!=0){
            printf("%d",i); 
        }
    }
    return;
} 
int printprimesInRange(int x,int y){
    for(int i=x;i<=y;i++){
        printf(printPrime(i));
    }
}
        