class Solution {
    public int change(int amount, int[] coins) {
        int[] dp =new int[amount+1];
        dp[0]=1;
        for(int c:coins){
            for(int x=c;x<=amount;x++){
                dp[x]+=dp[x-c];
            }
        }
        return dp[amount];
    }
}