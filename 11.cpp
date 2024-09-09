#include "iostream"
using namespace std;

int main(){
    int in;
    cin >> in;

    while(in){
        if((in % 10) % 2){
            cout << "NIE";
            return 0;
        }
        in /= 10;
    }
    cout << "TAK";
}
