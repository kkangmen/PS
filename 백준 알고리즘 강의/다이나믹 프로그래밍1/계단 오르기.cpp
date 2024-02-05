#include <iostream>

using namespace std;

int dp[301] = {0, };
int st[301] = {0, };

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;

    cin >> n;

    for (int i = 1; i <= n; i++){
        cin >> st[i];
    }

    dp[0] = 0;
    dp[1] = st[1];
    dp[2] = st[1] + st[2];
    for (int i = 3; i <= n; i++){
        dp[i] = max(dp[i-3] + st[i-1], dp[i-2]) + st[i];
    }

    cout << dp[n] << '\n';
    return 0;
}