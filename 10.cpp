#include "iostream"
#include "climits"
using namespace std;

int main(){
    int in, a = INT_MIN;
    cin >> in;
    bool hasStreak = true;
    while (in)
    {
        int d = in % 10;
        if(d <= a){
            hasStreak = false;
        }
        in /= 10;

        a = d;
    }
    
    if(!hasStreak){
        cout << "NIE";
        return 0;
    }
    cout << "TAK";
}
