#include <iostream>
#define MAX 100001
#define MOD 1000000009

using namespace std;

long long int d[MAX][4];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    int n;

    cin >> t;

    while (t--){
        d[1][1] = d[2][2] = 1;
        d[3][1] = d[3][2] = d[3][3] = 1;
        
        cin >> n;

        for (int i = 4; i <= n; i++){
            d[i][1] = (d[i-1][2] + d[i-1][3])%MOD;
            d[i][2] = (d[i-2][1] + d[i-2][3])%MOD;
            d[i][3] = (d[i-3][1] + d[i-3][2])%MOD;
        }

        cout << (d[n][1]+d[n][2]+d[n][3])%MOD << '\n';
    }
    return 0;
}