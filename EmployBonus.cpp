#include <iostream>

using namespace std;

int main(){
    string name;
    cout << "Enter employe's name:";
    cin >> name;
    int dv,numoft,numofs,points,bouns;
    cout << "Enter employee’s transactions dollar value:";
    cin >> dv;
    cout << "Enter number of transactions:";
    cin >> numoft;
    cout << "Enter number of shifts worked: ";
    cin >> numofs;
    points = (dv/numoft)/numofs;
    if(points<=30){
        bouns = 50;
    }
    if(points>30 && points<70){
        bouns = 75;
    }
    if(points>69 && points<200){
        bouns = 100;
    }
    if(points>= 200){
        bouns = 200;
    }
    cout << name <<" bouns is "<<bouns;
    return 0 ;
}