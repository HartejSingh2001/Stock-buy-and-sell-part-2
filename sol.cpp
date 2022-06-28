class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0,n=prices.size(),i;
        for(i=1;i<n;i++)
        {
            if(prices[i]>prices[i-1])
            {
                profit=profit+(prices[i]-prices[i-1]);
            }
        }
        return profit;
    }
};
