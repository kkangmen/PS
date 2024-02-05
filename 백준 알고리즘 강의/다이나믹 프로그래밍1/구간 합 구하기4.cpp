#include <iostream>

using namespace std;

int a[100001], d[1000001];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, m;
    int i, j;

    cin >> n >> m;

    d[0] = 0;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        d[i] = d[i-1] + a[i];
    }

    while (m--){
        cin >> i >> j;

        cout << d[j] - d[i-1] << '\n';
    }
    return 0;
}