#include "iostream"
#include "climits"
using namespace std;

int main(){
    int last = INT_MIN;
    bool hasStreak = true;
    for(int i = 0; i < 5; i++){
        int curr;
        cin >> curr;
        if(curr <= last){
            hasStreak = false;
        }
        last = curr;
    }
    if(!hasStreak){
        cout << "NIE";
        return 0;
    }
    cout << "TAK";
}
