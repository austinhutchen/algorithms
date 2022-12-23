class Solution {
public:
  double mySqrt(double x,int precision) {
    // find a way to include decimals in binary search, and convert to integer
    // after. This only works for whole numbers
    int first = 0;
    int last = x;
    int mid;
    float ans;
    while (first <= last) {
      mid = (first + last) / 2.0;
      double sq = mid*mid;
      if (sq == x) {
        return mid;
      }
      // if decimals were to be included, the below would be a function call for secondary binary search through the decimals, instead of mid being assigned to ans
      if (sq < x) {
      ans=mid;
        first = mid + 1;
      } 
      else if (sq > x) {
        last = mid - 1;
      }
    }
     // For computing the fractional part
    // of square root upto given precision
    float increment = 0.1;
    for (int i = 0; i < precision; i++) {
        while (ans * ans <= x) {
            ans += increment;
        }

        // loop terminates when ans * ans > number
        ans = ans - increment;
        increment = increment / 10;
    // this doesnt work yet, reasons why are currently unknown
    }
    return ans;
  }
};
