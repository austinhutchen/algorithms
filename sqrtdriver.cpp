#include <iostream>
#include "sqrt.h"
#include <ctime>

using namespace std;
long long now=clock();
// implement checker for very large numbers in algorithm
int main(){
Solution ans= Solution();
double input;
int precision;
bool exit=false;
while(true){
cout << "Enter your number for the calculation of its nearest square root." << endl;
cout << "Enter 0 to exit." << endl;
cin >> input;
cout << "Now, enter the decimals of precision that you would like." << endl;
cin >> precision;
while(cin.fail()){
 cout << "Error. Please enter a number below." << endl;
 cin >> input;
 cout << "Now, enter the whole number degree of decimal precision that you would like." << endl;
cin >> precision;
}
if(input==0){
return 0;
}
unsigned long long k = ans.mySqrt(input,precision);
if(k==0){
cout << "CALCULATION ERROR. INPUT OUTSIDE ROOT DOMAIN"<< endl;
}
else{
cout << "Your root is -> " << k << endl;
}
long long end=clock();
cout << "Time taken to check root: " << end-now << " seconds" << endl;
}
}


