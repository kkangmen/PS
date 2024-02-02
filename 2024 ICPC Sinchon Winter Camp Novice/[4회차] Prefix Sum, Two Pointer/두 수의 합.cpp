#include <iostream>
#include <algorithm>

using namespace std;

int a[100001];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }

    sort(a, a+n+1);
    int cnt = 0;
    int l = 1;
    int r = n;
    int x;
    cin >> x;
    while (l < r){
        int s = a[l] + a[r];
        if (s < x){
            l++;
        }
        else if (s > x){
            r--;
        }
        else {
            cnt++;
            l++;
        }
    }

    cout << cnt << '\n';
    return 0;
}