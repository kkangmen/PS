#include <iostream>

using namespace std;

int main(){
    int n;
    int d[501];
    int cnt = 0;
    int result = 0;

    cin >> n;
    d[0] = 1;

    for (int i = 1; i <= n; i++){
        d[i] = i * d[i-1];
    }

    result = d[n];

    cnt = (n / 5) + (n / 25) + (n / 125);

    cout << cnt << endl;
    
    return 0;
}