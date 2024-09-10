#include "iostream"
using namespace std;

int main(){
    int a, b, result = 0, c = 1;
    cin >> a >> b;
    while(b){
        int d = b % 10;
        result += a * d * c;
        c*=10;
        b /= 10;
    }
    cout << result;
}
