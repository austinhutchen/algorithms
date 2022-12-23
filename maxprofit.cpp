#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
 int maxProfit(vector<int> &prices)
 {
  int buy = 0;
  int sell = 0;
  bool found;
  int invalid = 0;
  int max = *max_element(prices.begin()++, prices.end());
  int min = *min_element(prices.begin(), prices.end()--);
  for (int i = 0; i < prices.size(); i++)
  {
   if (prices[i] == min)
   {
    buy = i;
    found = true;
   }
   else if (prices[i] == max && found == true)
   {
    sell = i;
   }
   // problem is below
   if (prices[i] < prices[i - 1] && i != 0)
   {
    invalid++;
   }
  }
  if (invalid == prices.size() - 1)
  {
   return 0;
  }
  else
  {
   int profit = prices[sell] - prices[buy];
   return profit;
  }
 }
};