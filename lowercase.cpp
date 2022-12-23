#include <iostream>
using namespace std;



string lowercase(string input){
for(int x=0;x<input.size();x++){
if(input[x]>=65&&input[x]<=90){
input[x]+=32;
}
else{continue;}
}
// end of loop
return input;
}