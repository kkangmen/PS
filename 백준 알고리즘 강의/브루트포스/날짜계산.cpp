#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int e, s, m;
    cin >> e >> s >> m;

    e -= 1;
    s -= 1;
    m -= 1;
    int ans = 0;
    while (1){
        if (ans % 15 == e && ans % 28 == s && ans % 19 == m){
            ans++;
            break;
        }
        else {
            ans++;
        }
    }

    cout << ans << '\n';
    return 0;
}