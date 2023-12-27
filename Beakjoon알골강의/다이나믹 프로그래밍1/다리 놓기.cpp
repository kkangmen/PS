#include <iostream>

using namespace std;

long long int top[30] = {0, };
long long int bottom[30] = {0, };

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    int n, m;

    cin >> t;

    while (t--){
        cin >> n >> m;

        top[0] = 1;
        for (int i = 1; i <= m; i++){
            top[i] = top[i-1] * i;
        }

        bottom[0] = 1;
        for (int i = 1; i <= m - n; i++){
            bottom[i] = bottom[i-1] * i;
        }

        cout << top[m]/bottom[m-n] << '\n';
    }
    return 0;
}