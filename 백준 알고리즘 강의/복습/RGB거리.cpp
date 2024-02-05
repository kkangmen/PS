#include <iostream>
#include <algorithm>

using namespace std;

int d[1001][3];

int main(){
    int n;
    cin >> n;

    int cost[3];


    for (int i=1; i<=n; i++){
        cin >> cost[0] >> cost[1] >> cost[2];
        
        d[i][0] = min(d[i-1][1], d[i-1][2]) + cost[0];
        d[i][1] = min(d[i-1][0], d[i-1][2]) + cost[1];
        d[i][2] = min(d[i-1][0], d[i-1][1]) + cost[2];
    }

    cout << min(d[n][0], min(d[n][1], d[n][2])) << '\n';
    return 0;
}