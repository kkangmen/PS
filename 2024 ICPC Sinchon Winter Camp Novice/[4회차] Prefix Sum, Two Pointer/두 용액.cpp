#include <iostream>
#include <algorithm>
#include <cstdlib>

using namespace std;

int a[100001];

int main(){
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a, a+n);
    int ans = 2000000000;
    int ans_l;
    int ans_r;
    int l = 0;
    int r = n-1;
    while (l < r){
        if (a[l] + a[r] < 0){
            if (abs(ans-0) > abs((a[l]+a[r])-0)){
                ans = a[l]+a[r];
                ans_l = l;
                ans_r = r;
            }
            l++;
        }
        else if (a[l] + a[r] > 0){
            if (abs(ans-0) > abs((a[l]+a[r])-0)){
                ans = a[l]+a[r];
                ans_l = l;
                ans_r = r;
            }
            r--;
        }
        else {
            if (abs(ans-0) > abs((a[l]+a[r])-0)){
                ans = a[l]+a[r];
                ans_l = l;
                ans_r = r;
            }
            break;
        }
    }

    cout << a[ans_l] << ' ' << a[ans_r] << '\n';
    return 0;
}