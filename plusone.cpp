#include <vector>
using namespace std;
#include <iostream>
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(size(digits)==1){
            if(digits[0]+1<10){
               digits[0]+=1;
                return digits;
            }
           else{
                digits[0]=1;
                digits.push_back(0);
                return digits;
            }
        }
        if(size(digits)>1){
            
             if(digits[size(digits)-1]+1<10){
                digits[size(digits)-1]+=1;
            return digits;
            }
        }
        // below needs work
           else if(digits[size(digits)-1]+1==10){
              digits.push_back(0);
                  digits[size(digits)-1]=1;
           }
        return digits;
    }
};

/**class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int numToAdd=1;
        
        int i;
        for(i=digits.size()-1; i>=0; i--)
        {
            if(numToAdd==1)
            {
                if(digits[i]==9)
                {
                    digits[i]=0;
                }
                
                else
                {
                    digits[i]=digits[i]+1;
                    numToAdd=0;
                    break;
                }
            }
            
            
        }
        
        if(i<0)digits.insert(digits.begin(),1);
        
        
        return digits;
    }
};*/