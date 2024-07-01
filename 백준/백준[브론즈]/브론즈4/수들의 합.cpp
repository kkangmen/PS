#include <iostream>
using namespace std;

int main(){
    long long s;
    cin >> s;

    long long k = 1;
    int cnt = 0;
    long long wv = 2;
    while (k <= s){
        cnt++;
        k += wv;
        wv++;
    }

    if (s == 1){
        cout << 1 << '\n';
    }
    else{
        cout << cnt << '\n';
    }
    return 0;
}