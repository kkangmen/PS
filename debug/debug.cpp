#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;

    int sum = 0;
    int ans = 0;
    if (1 <= n < 10){
        for (int i = 0; i < n; i++){
            ans += 1;
        }
        cout << ans << '\n';
    }
    else if (10 <= n < 100){
        for (int i = 10; i < n; i++){
            ans += 2;
        }
        cout << 9 + ans << '\n';
    }
    else if (n < 1000){
        for (int i = 100; i < n; i++){
            ans += 3;
        }
        cout << 9 + 180 + ans << '\n';
    }
    return 0;
}