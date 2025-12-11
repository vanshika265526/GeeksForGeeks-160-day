/*
Given an array prices[] of length n, representing the prices of the stocks on different days.
The task is to find the maximum profit possible by buying and selling the stocks on different days when at most one transaction is allowed. 
  Here one transaction means 1 buy + 1 Sell. If it is not possible to make a profit then return 0.
  */

class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        int minprice=INT_MAX;
        int profit=0;
        for(int price:prices){
           minprice=min(minprice,price);
           profit=max(profit,price-minprice);
    }
    return profit;
    }
};
