#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<long long int> v;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    long long int ans = 3000000000;
    int ans_l, ans_r, ans_m;
    for (int i = 0; i < n-2; i++){
        int m = i+1;
        int r = n-1;
        while (m < r){
            long long int sum = v[i] + v[m] + v[r];
            if (sum < 0){
                if (abs(sum) < abs(ans)){
                    ans = v[i] + v[m] + v[r];
                    ans_l = i;
                    ans_m = m;
                    ans_r = r;
                }
                m++;
            }
            else if (sum > 0){
                if (abs(sum-0) < abs(ans-0)){
                    ans = v[i] + v[m] + v[r];
                    ans_l = i;
                    ans_m = m;
                    ans_r = r;
                }
                r--;
            }
            else {
                cout << v[i] << ' ' << v[m] << ' ' << v[r] << '\n';
                return 0;
            }
        }
    }
    cout << v[ans_l] << ' ' << v[ans_m] << ' ' << v[ans_r] << '\n';
    return 0;
}