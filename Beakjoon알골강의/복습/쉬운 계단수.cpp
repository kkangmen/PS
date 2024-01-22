#include <iostream>
#define MOD 1000000000
using namespace std;

long long int d[101][10];

int main(){
    int n;
    long long int ans = 0;
    cin >> n;

    d[1][0] = 0;
    for (int i = 1; i <= 9; i++){
        d[1][i] = 1;
    }

    for (int i = 2; i <= n; i++){
        for (int j = 0; j <= 9; j++){
            if (j == 9){
                d[i][j] += (d[i-1][j-1])%MOD;
            }
            if (j == 0){
                d[i][j] += (d[i-1][j+1])%MOD;
            }
            if (1 <= j && j <= 8){
                d[i][j] += (d[i-1][j+1] + d[i-1][j-1])%MOD;
            }
        }
    }

    for (int i = 0; i <= 9; i++){
        ans += d[n][i];
    }

    cout << ans%MOD << '\n';
    return 0;

}