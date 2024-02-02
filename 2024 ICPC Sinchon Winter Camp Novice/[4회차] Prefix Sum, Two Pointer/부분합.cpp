#include <iostream>
#include <algorithm>

using namespace std;

int a[100001];
int ps[100001];

int main(){
    int n, s;
    cin >> n >> s;

    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }

    for (int i = 1; i <= n; i++){
        ps[i] = ps[i-1] + a[i];
    }

    int i = 1;
    int j = 1;
    int len = 100001;
    while (j < n+1){
        if (ps[j] - ps[i-1] < s){
            j++;
        }
        else {
            len = min(len, j-i+1);
            i++; 
        }
    }

    if (len == 100001){
        cout << 0 << '\n';
    }
    else {
        cout << len << '\n';
    }
    return 0;
}