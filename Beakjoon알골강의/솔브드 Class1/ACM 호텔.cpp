#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    int h, w, n;
    int back = 1;
    int front = 1;
    cin >> t;

    while (t--){
        cin >> h >> w >> n;

        while (n / h > 1){
            back++;
            front = n % h;
            n = n / h;
            
        }

        if (back < 10){
            cout << front << '0' << back << '\n';
        }
        else {
            cout << front << back << '\n';
        }
        
    }
    return 0;
}