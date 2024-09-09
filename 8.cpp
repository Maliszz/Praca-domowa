#include "iostream"
#include "climits"
using namespace std;

int main(){
    int in, mn = INT_MAX;

    cin >> in;

    while(in){
        mn = min(mn, in % 10);
        in /= 10;
    }

    cout << mn;
}
