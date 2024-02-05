#include <iostream>

using namespace std;

int main(){
    int d[10001];
    int n;

    cin >> n;

    d[0] = 1;
    d[1] = 1;

    for (int i = 2; i <= n; i++){
        d[i] = i * d[i-1];
    }

    cout << d[n];
    return 0;
}