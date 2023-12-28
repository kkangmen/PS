#include <iostream>

using namespace std;

int dp[30][30];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    int n, m;
    
    cin >> t;

    while (t--){
        cin >> n >> m;

        for (int i = 0; i <= n; i++){
            for (int j = 1; j <= m; j++){
                if (i == j){
                    dp[i][j] = 1;
                }
                else if (i == 0){
                    dp[i][j] = 1;
                }
                else{
                    dp[i][j] = dp[i-1][j-1] + dp[i][j-1];
                }
            }
        }

        cout << dp[n][m] << '\n';
    }
    return 0;
}