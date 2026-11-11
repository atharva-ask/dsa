class Solution {
public:
    int climbStairs(int n, vector<int>& costs) {
       vector < int > dp(n+1);

       for(int i = 1; i <= n; i++ ) {
            int mini = 1 + dp[i-1];

            if( i>=2 ) {
               mini = min(mini, 4 + dp[i-2]);
            } 

            if( i >=3 ){
                mini = min(mini, 9 + dp[i-3]);
            } 
           
            dp[i] = mini + costs[i-1];
       } 

       return dp[n];
    }
};