#include <iostream>
#define MAX 90

using namespace std;

long long d[MAX + 1][2];

int main(){
    d[1][0] = 0;
    d[1][1] = 1;

    int n;
    cin >> n;

    for (int i = 2; i <= n; i++){
        d[i][0] = d[i-1][0] + d[i-1][1];
        d[i][1] = d[i-1][0];
    }

    long long ans = 0;
    ans = d[n][0] + d[n][1];

    cout << ans << '\n';
    return 0;
}