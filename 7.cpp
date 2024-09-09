#include "iostream"
#include "climits"
using namespace std;

int main(){
    int mx = INT_MIN;

    for(int i = 0; i < 5; i++){
        int tmp;
        cin >> tmp;
        mx = max(mx, tmp);
    }

    cout << mx;
}
