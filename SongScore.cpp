#include <iostream>

using namespace std;

int main(){
    int score;
    double av = 0;
    double av2 =0;
    while(score>=0){
     cout<<"Enter rating for top song: ";
     cin >> score;
     av2 = av2+score;
    av++;
    }
    cout << "Average Star Value: "<< (av2/av);
return 0;
}