#include <iostream>

using namespace std;

int dp[101][15] = {0, };

int main(){
    int t;
    int k, n;

    cin >> t;

    while (t--){
        cin >> k >> n;
        
        for (int i = 0; i <= n; i++){
            dp[0][i] = i;
        }
        for (int i = 1; i <= k; i++){
            for (int j = 1; j <= n; j++){
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }
        
        cout << dp[k][n] << '\n';
    }
    return 0;
}