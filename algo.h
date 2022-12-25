#ifndef ALGO_H
#define ALGO_H
#include <iostream>
#include <map>
#include <vector>
using namespace std;
// common algorithms I use. Updated regularly
class algo {
public:
  int binarysearch(vector<int> list, int target) {
    int first = 0;
    int last = list.size() - 1;
    while (first <= last) {
      int mid = (first + last) / 2;
      if (list[mid] == target) {
        return mid;
      } else if (list[mid] < target) {
        first = mid + 1;
      } else if (list[mid] > target) {
        last = mid - 1;
      }
    }
    return 0;
  }

  int miniDist(int distance[], bool Tset[]) // finding minimum distance
  {
    int minimum = INT_MAX, ind;

    for (int k = 0; k < 6; k++) {
      if (Tset[k] == false && distance[k] <= minimum) {
        minimum = distance[k];
        ind = k;
      }
    }
    return ind;
  }

  void DijkstraAlgo(int graph[6][6], int src) // adjacency matrix
  {
    int distance[6]; // // array to calculate the minimum distance for each node
    bool Tset[6]; // boolean array to mark visited and unvisited for each node

    for (int k = 0; k < 6; k++) {
      distance[k] = INT_MAX;
      Tset[k] = false;
    }

    distance[src] = 0; // Source vertex distance is set 0

    for (int k = 0; k < 6; k++) {
      int m = miniDist(distance, Tset);
      Tset[m] = true;
      for (int k = 0; k < 6; k++) {
        // updating the distance of neighbouring vertex
        if (!Tset[k] && graph[m][k] && distance[m] != INT_MAX &&
            distance[m] + graph[m][k] < distance[k])
          distance[k] = distance[m] + graph[m][k];
      }
    }
    cout << "Vertex\t\tDistance from source vertex" << endl;
    for (int k = 0; k < 6; k++) {
      char str = 65 + k;
      cout << str << "\t\t\t" << distance[k] << endl;
    }
  }
  string lowercase(string input) {
    for (int x = 0; x < input.size(); x++) {
      if (input[x] >= 65 && input[x] <= 90) {
        input[x] += 32;
      } else {
        continue;
      }
    }
    // end of loop
    return input;
  }

  int maxProfit(vector<int> &prices) {
    if (prices.size() <= 1) {
      return 0;
    }
    int profit;
    int max = *max_element(prices.begin()++, prices.end());
    int min = *min_element(prices.begin(), prices.end()--);
    int invalid = 0;
    for (int i = 0; i < prices.size(); i++) {
      if (prices[i] == min) {
        for (int y = i; y < prices.size(); y++) {
          if (prices[y] == max) {
            profit = prices[y] - prices[i];
          }
        }
      }
      if (prices[i] < prices[i - 1] && i != 0) {
        invalid++;
      }
    }
    if (invalid == prices.size() - 1) {
      return 0;
    } else {
      return profit;
    }
  }
  void reverseString(vector<char> &s) {
    char z;
    char k;
    int j = s.size() - 1;
    for (int i = 0; i < s.size() && j > i; i++, j--) {
      z = s[j];
      k = s[i];
      s[j] = k;
      s[i] = z;
    }
  }
  char findchar(string &test, char &target) {
    // binary search not detecting first element
    int first = 0;
    int last = test.size() - 1;
    if (test[first] == target) {
      return first;
    } else if (test[last] == target) {
      return last;
    }
    while (first <= last) {
      int mid = (first + last) / 2;
      if (test[mid] == target) {
        return mid;
      } else if (test[mid] < target) {
        first = mid + 1;
      } else if (test[mid] > target) {
        last = mid - 1;
      }
    }
    return 0;
  }

  string bubsort(string &unsorted) {
    for (int i = 0; i < unsorted.size(); i++) {
      bool swap = false;
      for (int k = 0; k < unsorted.size() - 1; k++) {
        if (unsorted[k] > unsorted[k + 1]) {
          swap = true;
          char n = unsorted[k];
          unsorted[k] = unsorted[k + 1];
          unsorted[k + 1] = n;
        } else {
          continue;
        }
      }
      if (swap == false) {
        return unsorted;
      }
    }
    return unsorted;
  };
  double mySqrt(double x, int precision) {
    // find a way to include decimals in binary search, and convert to integer
    // after. This only works for whole numbers
    int first = 0;
    int last = x;
    int mid;
    float ans;
    while (first <= last) {
      mid = (first + last) / 2.0;
      double sq = mid * mid;
      if (sq == x) {
        return mid;
      }
      // if decimals were to be included, the below would be a function call for
      // secondary binary search through the decimals, instead of mid being
      // assigned to ans
      if (sq < x) {
        ans = mid;
        first = mid + 1;
      } else if (sq > x) {
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

  int romanToInt(string s) {
   /*
   map<char, int> ans = {{'I', 1},   {'V', 5},   {'X', 10},  {'L', 50},
                          {'C', 100}, {'D', 500}, {'M', 1000}};
    int total = ans[s.back()];
    for (int i = s.size() - 2; i >= 0; --i) {
      if (ans[s[i]] < ans[s[i + 1]]) {
        total -= ans[s[i]];
      } else {
        total += ans[s[i]];
      }
    }
    return total;
   */ 
  }
};
#endif