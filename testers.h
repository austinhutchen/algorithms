#pragma once
#include <iostream>
#include <vector>
#include <ctime>
#include "algo.h"
using namespace std;
// header file used to test algorithms for functionality
class tester{
public:
tester(){
start=time(NULL);
}

void stringsearch(){
 bool ans = true;
  string search;
 char character;
 bool exit;
algo alg=algo();
while(exit!=true){
cout << "ENTER THE STRING TO BE SEARCHED:" << endl;
cout << "type EXIT to exit." << endl;
cin >> search;
if(search=="EXIT"){
return;
}
search=alg.bubsort(search);
cout << "SORTED:" << search << endl;
while(character!='0'){
cout << "Enter the character to be searched. Press 0 to exit. " << endl;
cin >> character;
if(character=='0'){
 return;
}
if(!cin.fail()){
if(alg.findchar(search,character)!=0){
cout << "Character " << character << " exists in the given string." << endl;
}
else{
cout << "Character not found inside of string." << endl;
}
}
else{ cout << "ONLY SINGLE LETTERS ALLOWED" << endl;}
}
}
}






private:
time_t start;
time_t end;
};