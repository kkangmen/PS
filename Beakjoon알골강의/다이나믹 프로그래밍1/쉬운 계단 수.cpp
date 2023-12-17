#include <iostream>
#define MAX 100
#define MOD 1000000000
using namespace std;

int d[MAX+1][10];

int main(){
    int n;

    cin >> n;

    for (int j = 1; j < 10; j++){
        d[1][j] = 1;
    }
    for (int i = 2; i <= n; i++){
        for (int j = 0; j <= 9; j++){
            d[i][j] = 0;
            if (j-1 >= 0){
                d[i][j] += d[i-1][j-1];
            }
            if (j+1 <= 9){
                d[i][j] += d[i-1][j+1];
            }
            d[i][j] %= MOD;
        }

    }
    long long ans = 0;
    for (int i = 0; i <= 9; i++){
        ans += d[n][i];
    }

    ans %= MOD;

    cout << ans << '\n';
    return 0;
}