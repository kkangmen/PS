#include <iostream>

using namespace std;

void ptr(int u, int v){
    cout << u << ' ' << v << '\n';
}
int main(){
    long long n;
    cin >> n;

    cout << (n-1) + (n-1)*(n-2) << '\n';

    for (int i = 2; i <= n; i++){
        ptr(1, i);
    }

    return 0;
}