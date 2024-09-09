#include "iostream"

using namespace std;

int main(){
    int inpt, a;

    cin >> inpt;
    a = inpt % 10;
    while(inpt >= 10){
        inpt /= 10;
    }
    if(inpt == a){
        cout << "TAK";
    }
    else{
        cout << "NIE";
    }
}
