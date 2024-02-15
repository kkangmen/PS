#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<pair<int, int>> v;
int d[501];

int main(){
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        v.push_back(make_pair(a,b));
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++){
        d[i] = 1;
        for (int j = 0; j < i; j++){
            if (v[i].second > v[j].second){
                d[i] = max(d[i], d[j] + 1);
            }
        }
    }

    cout << n - *max_element(d, d+n) << '\n';
    return 0;
}