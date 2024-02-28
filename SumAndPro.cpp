#include <iostream>

using namespace std;
int sum(int num){
    int sum =0 ;
    for(int i =1 ; i<=num;i++){
   sum += i;
    }
    return sum;
}

int pro(int num){
    int pro =1 ;
    for(int i =1 ; i<=num;i++){
     pro = i * pro;
    }
    return pro;
}

int main(){
int num;
 cout << "Enter a positive integer or 0 to quit: ";
 cin >> num;
 if(num>=1){
 cout << "The sum is " << sum(num) << "."<<"\n";
 cout <<"The product is " << pro(num) << "."<<"\n";
 }
 while(num>0){
cout << "Enter a positive integer or 0 to quit: ";
 cin >> num;
 if(num>=1){
 cout << "The sum is " << sum(num) << "."<<"\n";
 cout <<"The product is " << pro(num) << "."<<"\n";
 }
 }
}