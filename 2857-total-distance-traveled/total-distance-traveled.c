int distanceTraveled(int mainTank, int additionalTank) {
    int d=0;
     while(mainTank>0){
        if(mainTank>=5&&additionalTank>0){
            d+=5;
            mainTank=mainTank-4;
            additionalTank--;        
        }else{
            d=(d+mainTank)*10;
            mainTank=0;
        }
     }
     return d;
}