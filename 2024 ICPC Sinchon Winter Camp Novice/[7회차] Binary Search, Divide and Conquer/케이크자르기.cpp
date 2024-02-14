#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int check_func(vector<long long> v, long long count, long long mid, long long l);

vector<long long> v;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long n, m, l;
    cin >> n >> m >> l;

    for (int i = 0; i < m; i++){
        long long x;
        cin >> x;
        v.push_back(x);
    }

    for (int i = 0; i < n; i++){
        long long left = 0;
        long long right = l;
        long long q;
        cin >> q;
        while (left <= right){
            long long mid = (left+right)/2;

            if (check_func(v, q, mid, l) == 1){
                left = mid+1;
            }
            else if (check_func(v, q, mid, l) == 0) {
                right = mid-1;
            }
        }
        cout << right << '\n';
    }

    return 0;
}

int check_func(vector<long long> v, long long count, long long mid, long long l){
    int cnt = 0;
    int prev = 0;
    for (int i = 0; i < v.size(); i++){
        if (v[i]-prev >= mid){
            prev = v[i];
            cnt++;
        }
    }

    if (count == cnt && l - prev < mid){
        cnt = count -1;
    }
    if (cnt < count){
        return 0;
    }
    else {
        return 1;
    }
}