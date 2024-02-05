#include <iostream>
#define MAX 1000001
#define MOD 1000000009

using namespace std;

long long int d[MAX];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    int n;
    cin >> t;

    while (t--){
        cin >> n;

        d[1] = 1, d[2] = 2, d[3] = 4;
        for (int i = 4; i <= n; i++){
            d[i] = (d[i-1] + d[i-2] + d[i-3])%MOD;
        }

        cout << d[n] << '\n';
    }
    return 0;
}