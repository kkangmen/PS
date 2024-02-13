#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<long long> v;

int main(){
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    long long left = 1;
    long long right = *max_element(v.begin(), v.end());
    long long ans = 0;
    while (left <= right){
        long long mid = (left+right)/2;
        long long total = 0;

        for (int i = 0; i < v.size(); i++){
            if (v[i]-mid >= 0){
                total += v[i]-mid;
            }
        }

        if (total > m){
            ans = mid;
            left = mid+1;
        }
        else if (total < m){
            right = mid-1;
        }
        else {
            ans = mid;
            left = mid+1;
        }
    }

    cout << ans << '\n';
    return 0;
}