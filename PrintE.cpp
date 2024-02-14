#include <iostream>

using namespace std;

int main(){
    int num = 0;
    while(num<5){
        cout<<"*";
        if(!(num%2>0)){
            for(int i = 0;i<2;i++){
                cout<<"*";
            }
        }
        cout<<"\n";
        num++;
    }   
    return 0;
}