#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> a;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }

    sort(a.begin(), a.end());

    int ans = 0;
    do {
        int sum = 0;
        for (int i = 0; i < n-1; i++){
            sum += abs(a[i+1] - a[i]);
        }
        ans = max(ans, sum);
    } while (next_permutation(a.begin(), a.end()));

    cout << ans << '\n';
    return 0;
}