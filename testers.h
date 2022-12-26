#pragma once
#include "algo.h"
#include <ctime>
#include <iostream>
#include <vector>
using namespace std;
// header file used to test algorithms for functionality
class tester {
public:
  tester() { start = time(NULL); }
  void maxprofit() {
    int input;
    algo alg = algo();
    vector<int> vect;
    int profit;
    cout << "Enter your list of numbers below." << endl;
    while (cin >> input) {
      vect.push_back(input);
    }
    if (!cin.fail()) {
      profit = alg.maxProfit(vect);
    }
    cout << "MAXIMUM PROFIT ON TRADE INTERVAL IS: " << profit << endl;
  }
  void stringsearch() {
    bool ans = true;
    string search;
    char character;
    bool exit;
    algo alg = algo();
    while (exit != true) {
      cout << "ENTER THE STRING TO BE SEARCHED:" << endl;
      cout << "type EXIT to exit." << endl;
      cin >> search;
      if (search == "EXIT") {
        return;
      }
      search = alg.bubsort(search);
      cout << "SORTED:" << search << endl;
      while (character != '0') {
        cout << "Enter the character to be searched. Press 0 to exit. " << endl;
        cin >> character;
        if (character == '0') {
          return;
        }
        if (!cin.fail()) {
          if (alg.findchar(search, character) != 0) {
            cout << "Character " << character << " exists in the given string."
                 << endl;
          } else {
            cout << "Character not found inside of string." << endl;
          }
        } else {
          cout << "ONLY SINGLE LETTERS ALLOWED" << endl;
        }
      }
    }
  }
  void findpset() {
  int input;
    algo alg = algo();
    vector<int> vect;
    vector<vector<int> > nvect;
    int profit;
    cout << "Enter your list of numbers below. type 1978 when done.." << endl;
    while (cin >> input&&input!=1978) {
      vect.push_back(input);
    }
      nvect=alg.pset(vect);
      cout << "ALL SUBSETS:" <<endl;
      for(int i=0;i<nvect.size();i++){
        for(int k=0;k<nvect[i].size();k++){
          cout << nvect[i][k] << " ";
        }
      }
      cout << endl;

  }

private:
  time_t start;
  time_t end;
};