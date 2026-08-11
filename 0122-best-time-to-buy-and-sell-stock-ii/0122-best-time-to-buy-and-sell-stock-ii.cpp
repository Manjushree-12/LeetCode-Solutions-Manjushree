class Solution {
public:
    int maxProfit(vector<int>& prices) {
      
        int n=prices.size();
          vector<vector<int>>dp(n,vector<int>(2,-1));
        return profit_f(0,1,prices,dp,n);
}
int profit_f(int ind,int buy,vector<int>&prices,vector<vector<int>>&dp,int n)
{   long profit=0;
    if(ind==n){ return 0;}
    if(dp[ind][buy]!=-1){ return dp[ind][buy];}
    if(buy)
    {
        profit=max(-prices[ind]+profit_f(ind+1,0,prices,dp,n),profit_f(ind+1,1,prices,dp,n));
    }
    else
    {
        profit=max(prices[ind]+profit_f(ind+1,1,prices,dp,n),profit_f(ind+1,0,prices,dp,n));
    }
    return dp[ind][buy]=profit;
}
};