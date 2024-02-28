#include <iostream>

using namespace std;

double sum(double num1,double num2){
   return num1+num2;
}
double difference(double num1,double num2){
    return num1-num2;
}
double product(double num1,double num2){
    return num1*num2;
}
int main(){
    double num1,num2;
 cout <<"Enter first numeric value: ";
 cin >> num1;
 cout << "Enter second numeric value: ";
 cin >> num2;
 cout << "Sum is: "<<sum(num1,num2)<<"\n";
 cout << "Difference is: "<<difference(num1,num2)<<"\n";
 cout << "Product is: "<<product(num1,num2)<<"\n";
}