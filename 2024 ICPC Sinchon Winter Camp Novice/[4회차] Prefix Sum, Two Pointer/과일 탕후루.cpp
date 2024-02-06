#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int a[200001]; // 과일의 개수 정렬
int f_count[10];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n; // 과일의 개수 입력
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    int l = 0; 
    int r = 0; 
    int len = 0;
    int kind = 0;
    int ans = 0;
    while (r < n){
        int cnt = 0;

        if (f_count[a[r]] == 0){
            kind++;
        }
        len++;
        f_count[a[r]]++;

        while (kind > 2){
            len--;
            f_count[a[l]]--;
            if (f_count[a[l]] == 0){
                kind--;
            }
            l++;
        }

        r++;
        ans = max(ans, len);
    }
    cout << ans << '\n';
    return 0;
}