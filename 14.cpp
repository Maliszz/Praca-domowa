#include "iostream"
using namespace std;

int main(){
    int in;
    cin >> in;

    string in_s = to_string(in);

    for(int x = 0; x <= in_s.size(); x++){
        if(in_s[x] != in_s[in_s.size() - x - 1]){
            cout << "NIE";
            return 0;
        }
    }
    cout << "TAK";
}
