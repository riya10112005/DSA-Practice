// LeetCode #121 - Best Time to Buy and Sell Stock
// Topic: Arrays


// I remember: find minimum price and maximum profit

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;
        for(int i = 1; i<prices.size(); i++) {
          if(prices[i] < minPrice){
              minPrice = prices[i];
          }
            if(prices[i] - minPrice > maxProfit){
                maxProfit = prices[i] - minPrice;
            }

        }
        return maxProfit;
    }
 };
