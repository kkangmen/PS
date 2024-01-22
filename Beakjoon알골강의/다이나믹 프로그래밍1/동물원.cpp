#include <iostream>
#define MOD 9901
using namespace std;

long long int d[100001][3];

int main(){
    int n;
    int ans = 0;
    cin >> n;

    d[1][0] = d[1][1] = d[1][2] = 1;

    for (int i = 2; i <= n; i++){
        d[i][0] = (d[i-1][0] + d[i-1][1] + d[i-1][2])%MOD;
        d[i][1] = (d[i-1][0] + d[i-1][2])%MOD;
        d[i][2] = (d[i-1][0] + d[i-1][1])%MOD;
    }

    for (int i = 0; i < 3; i++){
        ans += d[n][i];
    }
    cout << ans%MOD << '\n';
    return 0;
}