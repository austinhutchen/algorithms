#include "testers.h"
void menu(){
 cout << "WELCOME TO ====ALGORITHMS==== " <<endl;
 cout << "WHICH PROGRAM DO YOU NEED TO RUN?" <<endl;
 cout << "1) STRING SEARCH" <<endl;
 cout << "2) MAX PROFIT" <<endl;
 cout << "3) EXIT" <<endl;
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
  return main();
  }
  case 2:{
  helper.maxprofit();
  return main();
  }
  case 3:{
   return 0;
  }
 default: cout << "INVALID INPUT... " <<endl;
 return main();
 }
 }

}