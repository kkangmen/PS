#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



int main(){

    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> d(n);

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    d[0] = a[0];
    for (int i = 1; i < n; i++){
        d[i] = a[i];
        if (d[i] < d[i-1] + a[i]){
            d[i] = d[i-1] + a[i];
        }
    }

    cout << *max_element(d.begin(), d.end()) << '\n';
    return 0;
}