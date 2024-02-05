#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    int cards;

    cin >> n;

    int d[n+1] = {0,};
    int p[n+1] = {0,};
    for (int i = 1; i <= n; i++){
        cin >> cards;
        p[i] = cards;
    }

    for (int i = 1; i <= n; i++){
        d[i] = 1000 * 10000;
    }
    
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            d[i] = min(d[i], d[i-j] + p[j]);
        }
    }

    cout << d[n] << '\n';


    return 0;
}