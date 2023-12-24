#include <iostream>
#include <algorithm>

using namespace std;

int dp[1001][3] = {0, };
int cost[3] = {0, };
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    
    cin >> n;

    for (int i = 1; i <= n; i++){
        cin >> cost[0] >> cost[1] >> cost[2];

        dp[i][0] = min(dp[i-1][1], dp[i-1][2]) + cost[0];
        dp[i][1] = min(dp[i-1][0], dp[i-1][2]) + cost[1];
        dp[i][2] = min(dp[i-1][0], dp[i-1][1]) + cost[2];
    }
    
    int result = dp[n][0];

    for (int i = 1; i < 3; i++){
        result = min(result, dp[n][i]);
    }

    cout << result << '\n';
    return 0;
}