int printPrimesInRange(int x,int y){
    for(int num = x;num<y;num++){
        if(num>1){
            for(int i = 2;i<num;i++){
                if(num%i==0){
                    printf("%d",num);
                }
            }
        }
    }
}