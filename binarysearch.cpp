#include <iostream>
#include <vector>
using namespace std;

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

