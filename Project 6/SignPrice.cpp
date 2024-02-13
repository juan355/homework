#include <iostream>

using namespace std;

int main(){
    double price = 35.00;
    string wood;
    cout << "Enter sign wood (oak or pine):" ;
    cin >> wood;
    if (wood =="oak"){
    price = price + 20;
    }
     string words ;
   cout << "what will it say : ";
   cin >> words;
   int letters = words.length();
   if (letters>5){
    price = price + ((letters-5)*4);
   }
   string color;
   cout << "what color wil you like : (black,white or gold): ";
   cin >> color;
   if (color == "gold"){
    price = price + 15;
   }
  cout << price << "\n";
   return 0;
}

