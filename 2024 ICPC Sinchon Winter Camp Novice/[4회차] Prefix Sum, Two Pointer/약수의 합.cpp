#include <iostream>
#define MAX 1000001
using namespace std;

long long int dp[MAX];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    for (int i = 1; i < MAX; i++){
        for (int j = i; j < MAX; j+=i){
            dp[j] += i;
        }
        dp[i] += dp[i-1];
    }

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << dp[n] << '\n';
    }
    return 0;
}