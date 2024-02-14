#include <iostream>

using namespace std;

int main(){
    string name ;
    double salery,rank,bouns;
    cout << " Enter enployes name: ";
    cin >> name;
    cout << " Enter enployes salery:";
    cin >> salery;
    cout << "Enter enploy's rank: ";
    cin >> rank;
    if(rank == 1){
        bouns = salery*0.25;
    }
    if(rank == 2){
        bouns = salery*0.15;
    }
    if(rank == 3){
        bouns = salery*0.10;
    }
    if(rank == 4){
        bouns = salery*0;
    }
  cout<< name << " rank is "<<rank<<" and bouns is "<<bouns;
}
