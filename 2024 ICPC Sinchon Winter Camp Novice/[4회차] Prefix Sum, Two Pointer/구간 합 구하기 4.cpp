#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    int a[n+1];
    int ps[n+1] = {0, };
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }

    for (int i = 1; i <= n; i++){
        ps[i] = ps[i-1] + a[i];
    }

    int i, j;
    while (m--){
        cin >> i >> j;

        cout << ps[j] - ps[i-1] << '\n';
    }
    return 0;
}