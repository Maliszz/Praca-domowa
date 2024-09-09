#include "iostream"
using namespace std;

int main(){
    int in;
    cin >> in;

    for(int i = 1; i * i < in; i++){
        if(!(in % i)){
            cout << i << " " << in / i << " ";
        }
    }
}
