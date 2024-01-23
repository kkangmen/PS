#include <iostream>
#include <algorithm>

using namespace std;

int d[10001][3];
int cost[10001];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> cost[i];
    }

    d[1][0] = 0;
    d[1][1] = cost[1];
    d[2][1] = cost[2];
    d[2][0] = cost[1];
    d[2][2] = cost[1] + cost[2];
    for (int i = 3; i <= n; i++){
        d[i][0] = max({d[i-1][0], d[i-1][1], d[i-1][2]});
        d[i][1] = d[i-1][0] + cost[i];
        d[i][2] = d[i-1][1] + cost[i];
    }

    cout << max({d[n][0], d[n][1], d[n][2]}) << '\n';
    return 0;
}