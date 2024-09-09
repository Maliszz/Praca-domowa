#include "iostream"
#include "cmath"
using namespace std;

int main(){
    int in;
    cin >> in;

    for(int i = 1; i * i < in; i++){
        if(!(in % i)){
            cout << i << " ";

        }
    }
    for(int i = sqrt<int>(in); i > 0; i--){
        if(!(in % i)){
            cout << in/i << " ";

        }
    }
}
