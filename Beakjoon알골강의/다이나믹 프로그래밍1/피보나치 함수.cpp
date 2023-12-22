#include <iostream>

using namespace std;

int d[41];
int k[41];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    int n;

    cin >> t;

    while (t--){
        cin >> n;

        d[0] = 1;
        d[1] = 0;
        d[2] = 1;
        k[0] = 0;
        k[1] = 1;
        k[2] = 1;

        for (int i = 3; i <= n; i++){
            d[i] = d[i-1] + d[i-2];
        }

        for (int i = 3; i <=n; i++){
            k[i] = k[i-1] + k[i-2];
        }
       
       cout << d[n] << ' ' << k[n] << '\n';
    }
    return 0;
}