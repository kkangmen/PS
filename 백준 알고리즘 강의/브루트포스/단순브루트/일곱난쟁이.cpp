#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    vector<int> v;
    int sum = 0;
    int height;
    for (int i = 0 ; i < 9; i++){
        cin >> height;
        v.push_back(height);
        sum += height;
    }

    sort(v.begin(), v.end());
    for (int i = 0; i < 8; i++){
        for (int j = i+1; j < 9; j++){
            if (sum - (v[i]+v[j]) == 100){
                for (int k = 0; k < 9; k++){
                    if (k != i && k != j){
                        cout << v[k] << '\n';
                    }
                }
                return 0;
            }
        }
    }
    return 0;
}