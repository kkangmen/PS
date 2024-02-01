#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, k;
    int cnt = 0;
    cin >> n >> k;
    vector<bool> prime(n+1, true);

    for (int i = 2; i <= n; i++){
        if (prime[i]){
            cnt++;
            if (cnt == k){
                cout << i << '\n';
            }
            else{
                for (int j = i+i; j <= n; j+=i){
                    if (prime[j]){
                        prime[j] = false;
                        cnt++;
                    }
                    if (cnt == k){
                        cout << j << '\n';
                        return 0;
                    }
                }
            }
        }
    }

    
    return 0;
}