class Solution {
    public int distanceTraveled(int mainTank, int additionalTank) {
     int r=0;
     for(int i=1;i<=mainTank;i++){
        if(additionalTank!=0&&i%5==0){
            additionalTank-=1;
            r+=10;
            mainTank+=1;
        }
        else{
            r+=10;
        }
     }
     return r;   
    }
}