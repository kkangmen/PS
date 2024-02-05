#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, k;
    int cnt = 0;

    cin >> n >> k;

    vector<bool> v (n + 1, true);

    for (int i = 2; i <= n; i++){
        for (int j = i; j <= n; j += i){
            if (v[j]){
                v[j] = false;
                cnt++;
                if (cnt == k){
                    cout << j << endl;

                    return 0;
                }
            }
        }
    }

    return 0;
}

