#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int d[5000] = {0, };
    int n;

    cin >> n;

    d[3] = d[5] = 1;
    d[1] = d[2] = d[4] = 9999;
    
    for (int i = 6; i <= n; i++){
        d[i] = min(d[i-3], d[i-5]) + 1;
    }

    if (d[n] >= 9999){
        cout << -1 << '\n';
    }
    else {
        cout << d[n] << '\n';
    }
    return 0;
}