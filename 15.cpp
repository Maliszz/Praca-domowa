#include "iostream"
using namespace std;

int main(){
    int a, b, result = 0, aa, c = 1;
    cin >> a >> b;

    aa = a;

    while(b){
        int d = b % 10, w = 1;
        while(aa){
            int da = aa % 10;
            result += da * d * w * c;
            aa /= 10;
            w*=10;
        }
        aa = a;
        c*=10;
        b /= 10;
    }
    cout << result;
}
