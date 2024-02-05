#include <iostream>
#define MAX 1000001
using namespace std;

bool decimal[MAX];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    int n;

    cin >> t;

    for (int i = 2; i*i < MAX; i++){
        for (int j = i+i; j < MAX; j+=i){
            if (decimal[j] == false){
                decimal[j] = true;
            }
        }
    }

    while (t--){
        cin >> n;

        int cnt = 0;
        for (int i = 2; i <= n/2; i++){
            if (decimal[i] == false && decimal[n-i] == false){
                cnt++;
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}