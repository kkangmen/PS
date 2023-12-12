#include <iostream>
#include <vector>

using namespace std;

void find_decimal(int, int);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int m ,n;
    
    cin >> m >> n;

    find_decimal(m, n);
    return 0;
}

void find_decimal(int a, int b){
    vector<bool> v (b+1, true);

    v[1] = false;
    for (int i = 2; i <= b; i++){
        if (v[i]){
            for (int j = i + i; j <= b; j += i){
                v[j] = false;
            }
        }
    }

    for (int i = a; i < v.size(); i++){
        if (v[i]){
            cout << i << '\n';
        }
    }
}