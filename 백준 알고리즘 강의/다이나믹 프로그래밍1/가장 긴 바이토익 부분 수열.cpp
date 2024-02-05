#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> d(1000);
vector<int> a(1000);
vector<int> k(1000);

int main(){
    int n;
    cin >> n;
    for (int i = 0 ; i < n; i++){
        cin >> a[i];
    }

    for (int i = 0; i < n; i++){
        d[i] = 1;
        for (int j = 0; j < i; j++){
            if (a[j] < a[i] && d[i] < d[j] + 1){
                d[i] = d[j] + 1;
            }
        }
    }

    for (int i = n-1; i >= 0; i--){
        k[i] = 1;
        for (int j = n-1; j > i; j--){
            if (a[j] < a[i] && k[i] < k[j] + 1){
                k[i] = k[j] + 1;
            }
        }
    }
    
    int ans = d[0] + k[0] -1;
    for (int i = 0; i < n; i++){
        if (ans < d[i]+k[i]-1){
            ans = d[i]+k[i]-1;
        }
    }
    cout << ans << '\n';
    return 0;
}
