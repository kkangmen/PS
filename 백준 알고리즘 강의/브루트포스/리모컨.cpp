#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool broken[10];

int possible(int x){
    if (x == 0){
        if (broken[0]){
            return 0;
        }
        else{
            return 1;
        }
    }
    int len = 0;
    while (x > 0){
        if (broken[x%10]){
            return 0;
        }
        len += 1;
        x /= 10;
    }
    return len;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;
    int m;
    cin >> m;
    for (int i = 0; i < m; i++){
        int broken_num;
        cin >> broken_num;
        broken[broken_num] = true;
    }

    int ans;
    ans = n - 100;
    if (ans < 0){
        ans = -ans;
    }

    for (int i = 0; i <= 1000000; i++){
        int len = possible(i);
        if (len > 0){
            int press = n - i;
            if (press < 0){
                press = -press;
            }            
            if (ans > len + press){
                ans = len + press;
            }
        }
    }
    cout << ans << '\n';
    return 0;
}