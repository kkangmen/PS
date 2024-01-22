#include <iostream>
#include <algorithm>

using namespace std;

//int d[100001][3];

int main(){
    int d[4][3] = {0, };
    int t;
    int n;
    cin >> t;

    while (t--){
        cin >> n;

        int cost[3][n+1] = {0, };
        for (int i = 1; i <= 2; i++){
            for (int j = 1; j <= n; j++){
                cin >> cost[i][j];
            }
        }
        d[1][1] = cost[1][1];
        d[1][2] = cost[1][2];

        for (int i = 2; i <= n; i++){
            if (i == 2){
                d[1][i] = d[2][i-1] + cost[1][i];
                d[2][i] = d[1][i-1] + cost[i][2];
            }
            else {
                for (int j = i-2; j >= 1; j--){
                    d[1][i] = max(d[1][i] + cost[1][i], max(d[2][i-1], max(d[1][j], d[2][j])) + cost[1][i]);
                    d[2][i] = max(d[2][i] + cost[2][i] , max(d[1][i-1], max(d[1][j], d[2][j])) + cost[2][i]);
                }
            }
        }
        cout << d[1][n-1] << ' ' << d[2][n-1] << '\n';
        cout << d[1][n] + cost[1][n] << ' ' << d[2][n] + cost[2][n] << '\n';
        //cout << max(d[1][n], d[2][n]) << '\n';
    }
    return 0;
}