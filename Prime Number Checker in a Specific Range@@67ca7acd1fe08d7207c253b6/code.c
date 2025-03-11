int printPrimesInRange(int x){
        for(int i =2;i< x;i++){
            if(x%i==1){
                return 0;
            }
            else{
                return 1;
            }
        
        }
        for(int j<x;j<=y;j++){
            if(printPrimesInRange(j)){
                printf("%d",j);
            }
        }
        }
   