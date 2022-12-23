#include <iostream>
#include <vector>
#include <thread>
using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
        char z;
        char k;
         int j =s.size()-1;
        for(int i=0;i<s.size()&&j>i;i++,j--){
             z=s[j];
             k=s[i];
                s[j]=k;
                 s[i]=z;
        }
        
        
        
    }
};