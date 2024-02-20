#include <iostream>

using namespace std;

int main(){
    
    double bat[8] ;
    double max,min,av;
    for( int i =0;i <8;i++){
        cout << "Enter a batting average: ";
        cin >> bat[i];
        if(min>bat[i]){
            min = bat[i];
        }
         if(max < bat[i]){
            max = bat[i];
        }
        av=(bat[i]+av);
    }
    for(int j = 0; j<8;j++){
        cout <<"averages["<<j<<"] is: "<< bat[j] << "\n";
    }
    cout <<"Minimum batting average is "<<min<< "\n";
     cout <<"Maximum batting average is "<<max<< "\n";
      cout <<"Average batting average is  "<<av/8<< "\n";
}