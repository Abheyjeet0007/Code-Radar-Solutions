int printPrimesInRange(int x,int y){
        for(int i =2;i< y;i++){
            if(y%i==1){
                return 0;
            }
            else{
                return 1;
            }
        
        }

        }
        
        for(int j=x;j<=y;j++){
            if(printPrimesInRange(j)){
                printf("%d",j);
            }
        }
   