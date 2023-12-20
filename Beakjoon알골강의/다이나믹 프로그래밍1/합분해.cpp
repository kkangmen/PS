#include <iostream>

using namespace std;

int main(){
    int n, k;
    long long D[201][201] = {0, };
    long long mod = 1000000000;

    cin >> n >> k;

    D[0][0] = 1LL;
    for (int i = 1; i <= k; i++){
        for (int j = 0; j <= n; j++){
            for (int k = 0; k <= j; k++){
                D[i][j] += D[i-1][j-k];
                D[i][j] %= mod;
            }
        }
    }

    cout << D[k][n] << '\n';
    return 0;
}