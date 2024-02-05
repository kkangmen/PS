#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    
    cin >> n;

    long long int a[n];

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a, a+n);

    int m;
    int num;
    cin >> num;

    while (num--){
        cin >> m;

        int result = 0;
        int left = 0, right = n -1 ;

        while (left <= right){
            int mid = (left + right) / 2;

            if (a[mid] == m){
                result++;
                break;
            }
            else if (a[mid] > m){
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }

        if (result > 0){
            cout << 1 << '\n';
        }
        else {
            cout << 0 << '\n';
        }
    }
    return 0;
}