#include <iostream>

using namespace std;

int main(){
    int first,sec,thrd;
  cout << "Enter the first number: ";
   cin >> first;
   cout << "Enter the second number: ";
   cin >> sec;
   cout << "Enter the third number: ";
   cin >> thrd;
 if(first>sec && sec>thrd){
    cout << first<<" "<<sec<<" "<<thrd;
 }
 if(sec>thrd && thrd>first){
    cout << sec<<" "<<thrd<<" "<<first;
 }
 if(thrd>first && first>sec){
    cout << thrd<<" "<<first<<" "<<sec;
 }
 if(first>thrd && thrd>sec){
    cout << first<<" "<<thrd<<" "<<sec;
 }
 if(thrd>sec && sec>first){
    cout << thrd<<" "<<sec<<" "<<first;
 }
    return 0;}