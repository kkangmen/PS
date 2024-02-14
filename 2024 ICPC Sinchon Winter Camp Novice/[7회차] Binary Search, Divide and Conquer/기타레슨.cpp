#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<long long> v;

bool check_blueray(vector<long long>& v, long long taget, long long size);

int main(){
    int n, m;
    cin >> n >> m;
    long long sum = 0;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
        sum += x;
    }

    long long left = 1;
    long long right = sum;
    long long ans = sum;
    while (left <= right){
        long long mid = (left+right)/2;
        
        if (mid >= *max_element(v.begin(), v.end()) && check_blueray(v, mid, m)){
            ans = min(mid, ans);
            right = mid-1;
        }
        else {
            left = mid+1;
        }
    }

    cout << ans << '\n';
    return 0;
}

bool check_blueray(vector<long long>& v, long long target, long long size){
    long long cnt = 1;
    long long sum = 0;
    for (int i = 0; i < v.size(); i++){
        sum += v[i];
        if (sum > target){
            cnt++;
            i--;
            sum = 0;
        }
    }

    if (cnt <= size){
        return true;
    }
    else{
        return false;
    }
}