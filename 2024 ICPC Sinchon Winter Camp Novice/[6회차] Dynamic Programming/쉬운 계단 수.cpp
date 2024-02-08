#include <iostream>
#define MOD 1000000000
using namespace std;

long long d[101][10];

int main(){
    int n;
    cin >> n;

    d[1][0] = 0;
    for (int i = 1; i < 10; i++){
        d[1][i] = 1;
    }

    for (int i = 2; i <= n; i++){
        for (int j = 0; j <= 9; j++){
            if (j == 0){
                d[i][j] = d[i-1][j+1];
            }
            else if (j == 9){
                d[i][j] = d[i-1][j-1];
            }
            else {
                d[i][j] = (d[i-1][j+1] + d[i-1][j-1])%MOD;
            }
        }
    }

    long long sum = 0;
    for (int i = 0; i < 10; i++){
        sum += d[n][i]%MOD;
    }

    cout << sum%MOD << '\n';
    return 0;
}