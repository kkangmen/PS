#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long w[101];
long long v[101];
long long d[101][100001];

int main(){
    int n, k;
    cin >> n >> k;

    for (int i = 1; i <= n; i++){
        cin >> w[i] >> v[i];
    }

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= k; j++){
            if (j - w[i] >= 0){
                d[i][j] = max(d[i-1][j] , d[i-1][j-w[i]] + v[i]);
            }
            else {
                d[i][j] = d[i-1][j];
            }
        }
    }

    cout << d[n][k] << '\n';
    return 0;
}