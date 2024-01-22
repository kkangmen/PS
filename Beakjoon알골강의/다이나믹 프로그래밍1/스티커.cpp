#include <iostream>
#include <algorithm>

using namespace std;

int d[100001][3];
int cost[100001][2];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    int n;
    cin >> t;

    while (t--){
        cin >> n;
        for (int i = 1; i <= n; i++){
            cin >> cost[i][1];
        }
        for (int i = 1; i <= n; i++){
            cin >> cost[i][2];
        }

        d[1][0] = cost[1][0];
        d[1][1] = cost[1][1];
        d[1][2] = cost[1][2];
        for (int i = 2; i <= n; i++){
            d[i][0] = max({d[i-1][1], d[i-1][2], d[i-1][0]});
            d[i][1] = max(d[i-1][2], d[i-1][0]) + cost[i][1];
            d[i][2] = max(d[i-1][1], d[i-1][0]) + cost[i][2];
        }

        cout << max({d[n][0], d[n][1], d[n][2]}) << '\n';
    }

    return 0;
}