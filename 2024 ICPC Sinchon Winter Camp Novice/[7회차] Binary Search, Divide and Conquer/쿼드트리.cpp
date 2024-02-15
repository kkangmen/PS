#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<char>> v;

void func(int y, int x, int size){
    char init = v[y][x];

    for (int i = y; i < y + size; i++){
        for (int j = x; j < x + size; j++){
            if (v[i][j] != init){
                cout << '(';
                func(y, x, size/2);
                func(y, x + size/2, size/2);
                func(y + size/2, x, size/2);
                func(y + size/2, x + size/2, size/2);
                cout << ')';
                return;
            }
        }
    }

    cout << init;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;

    v.resize(n, vector<char>(n));

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> v[i][j];
        }
    }

    func(0, 0, n);
    return 0;
}