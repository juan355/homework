#include <iostream>

using namespace std;
class Car {
  public:
    string brand;   
    string model;
    int year;
};
class Pizzz{
    public:
    string toppings;
    string style;
    string sace;
};
class computer {
    public:
    string brand;
    int gigsofram;
    int yearmade;
    };



int main(){
computer pc ;
pc.brand = "Dell";
pc.gigsofram = 16;
pc.yearmade = 2020;
cout << pc.brand +" "<< pc.gigsofram +" "<<pc.yearmade<<"\n";
Pizzz pie;
pie.toppings = "peperoni";
pie.style = "new york";
pie.sace = "tomato";
cout <<  pie.toppings +" "<< pie.style +" "<< pie.sace<<"\n";
Car telsla;
telsla.brand = "Tesla";
telsla.model = "y seres";
telsla.year = 2021;
cout << telsla.brand  +" "<< telsla.model +" "<< telsla.year<<"\n";

}