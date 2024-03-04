#include <iostream>

using namespace std;
void pro(int num1,int num2, string sign){
    if (sign == "+"){
        cout<< num1 + num2;
    }
    if (sign == "-"){
        cout << num1 - num2;
    }
    if (sign == "*"){
        cout << num1 * num2;
    }
    if (sign == "/"){
        cout << num1 / num2;
    }
    if (sign == "%"){
        cout << num1 % num2;
    }
}

int main(){
    int num1,num2;
    string sign = " ";
cout << "Enter the first number:";
cin >> num1;
cout << "Enter the second number:";
cin >> num2;
cout<< "Enter an operator (+.-.*,/,%):";
cin >> sign;
cout << num1<<"\n";
cout << sign <<"\n";
cout << num2 << "\n";
cout << "="<<"\n";
 pro(num1,num2,sign);
}