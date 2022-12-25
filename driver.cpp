#include "testers.h"
void menu(){
 cout << "WELCOME TO ====ALGORITHMS==== " <<endl;
 cout << "WHICH PROGRAM DO YOU NEED TO RUN?" <<endl;
 cout << "1) STRING SEARCH" <<endl;
 cout << "2) MAX PROFIT" <<endl;
}
int main(){
 tester helper=tester();
menu();
 int input;
 cin >> input;
 if(!cin.fail()){
 switch(input){
  case 1:{
  helper.stringsearch();
  break;
  }
  case 2:{
  helper.maxprofit();
  break;
  }
 default: cout << "INVALID INPUT... " <<endl;
 return main();
 }
 }

}