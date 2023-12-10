#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    int d[1000] = {0, };
    int p[1000] = {0, };

    for (int i = 1; i <= n; i++){
        cin >> p[i];
    }

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            d[i] = max(d[i], d[i-j] + p[j]);
        }
    }

    cout << d[n] << endl;
    
    return 0;
}