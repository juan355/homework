#include <iostream>

using namespace std;

int main(){
    string name[20];
    int age[20];
    char grade[20];
    int num;
    cout << "Please enter number of students: ";
    cin >> num;
    for(int i =0;i<num;i++){
        cout <<"Enter name: ";
        cin>> name[i];
        cout << "Enter age: ";
        cin >> age[i];
        if(age[i]<0){
            cout <<"Invaled age enter again"<<"\n";
            cout << "Enter age: ";
            cin >> age[i];  
        }
        cout <<"Enter grade ";
        cin >> grade[i];
        if(grade[i]!= 65){
            if(grade[i]!= 66){
            if(grade[i]!= 67){
            if(grade[i]!= 68){
            if(grade[i]!= 70){
            cout <<"Invaled grade enter again"<<"\n";
            cout << "Enter grade: ";
            cin >> grade[i]; 
            }
            }
            }
            }
        } 
        
    }

}