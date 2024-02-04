#include <iostream>

using namespace std;

int a[1000001];
long long int p[1000001];

int main(){
    int n, m;
    cin >> n >> m;
    long long int cnt = 0;

    long long int c[m] = {0, };

    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }

    for (int i = 1; i <= n; i++){
        p[i] = p[i-1] + a[i];
    }

    for (int i = 1; i <= n; i++){
        c[p[i] % m]++;
    }

    cnt += c[0];
    for (int i = 0; i < m; i++){
        cnt += c[i]*(c[i]-1) / 2;
    }

    cout << cnt << '\n';
    return 0;
}