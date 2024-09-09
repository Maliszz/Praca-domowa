#include "iostream"

using namespace std;

int main(){
    int inpt, ans = 0;

    cin >> inpt;

    while(inpt){
        ans += inpt % 10;
        inpt /= 10;
    }
    cout << ans; 
}
