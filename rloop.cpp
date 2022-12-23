#include <iostream>
using namespace std;


int main(){
string name;
cout << "Enter your name below:" << endl;
cin >>  name;
for(char i : name){
 cout << i << endl;
}
return 0;


}