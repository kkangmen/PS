#include <iostream>
#define MOD 10007

using namespace std;

long long int d[1001][10];

int main(){
    int n;
    cin >> n;

    long long int ans = 0;
    for (int i = 0; i <= 9; i++){
        d[1][i] = 1;
    }

    for (int i = 2; i <= n; i++){
        for (int j = 0; j <= 9; j++){
            for (int k = j; k >= 0; k--){
                d[i][j] += (d[i-1][k])%MOD;
            }
        }
    }

    for (int i = 0; i <= 9; i++){
        ans += d[n][i];
    }

    cout << ans%MOD << '\n';
    return 0;
}