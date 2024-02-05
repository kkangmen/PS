#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int D[100000] = {0, };
    fill_n(D, 100001, 100);
    
    int n;

    cin >> n;

    D[0] = 0;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j * j <= i; j++){
            D[i] = min(D[i], D[i - j*j] + 1);
        }
    }

    cout << D[n] << '\n';
    return 0;
}