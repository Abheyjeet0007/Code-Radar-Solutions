int printPrimesInRange(int x,int y){
    for(int num = x;num<=y;num++){
        for(int i = 2;i<=num;i++){
            if(num%i!=0){
                printf("%d",num);
            }
        }
    }
        }
   