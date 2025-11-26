/*
Stock Buy and Sell – Multiple Transaction Allowed

The cost of stock on each day is given in an array price[]. Each day you may decide to either buy or sell the stock i
at price[i], you can even buy and sell the stock on the same day. Find the maximum profit that you can get.

Note: A stock can only be sold if it has been bought previously and multiple stocks cannot be held on any given day.

*/


class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // basically we will add profits whose difference is greater than previous 
        int profit=0;  //initialise the profit variable first
        
        //start the loop so that we can check for differences
        for(int i=0;i<prices.size()-1;i++){
            if(prices[i]<prices[i+1]){
                profit+=prices[i+1]-prices[i];      
            }
        }    
        return profit;
    }
};

