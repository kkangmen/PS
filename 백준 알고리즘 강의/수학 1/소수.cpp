#include <iostream>
#include <vector>

using namespace std;

int main(){
    int m, n;
    vector <int> v;
    int sum = 0;

    cin >> m >> n;

    vector <bool> arr(n+1, true);

    arr[1] = false;
    for (int i = 2; i*i <= n; i++){
        for (int j = i*i; j <=n; j+=i){
            if (arr[j]){
                arr[j] = false;
            }
        }
    }

    for (int i = m; i <= n; i++){
        if (arr[i]){
            v.push_back(i);
        }
    }

    if (v.size() == 0){
        cout << -1 << '\n';
    }
    else {
        for (int i = 0; i < v.size(); i++){
            sum += v[i];
        }
        cout << sum << '\n';
        cout << v[0] << '\n';
    }
    
    return 0;
}