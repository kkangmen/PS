#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    int d[11];
    d[1] = 1;
    d[2] = 2;
    d[3] = 4;
    while (t--){
        int num;
        cin >> num;

        for (int i = 4; i <= num; i++){
            d[i] = d[i-1] + d[i-2] + d[i-3];
        }

        cout << d[num] << '\n';
    }
    return 0;
}