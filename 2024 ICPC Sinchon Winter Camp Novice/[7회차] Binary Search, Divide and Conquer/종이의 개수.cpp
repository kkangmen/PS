#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> imageMatrix;
int one=0;
int zero=0;
int m_one=0;

void func(int y, int x, int size){
    int init = imageMatrix[y][x];
    bool check = true;

    for (int i = y; i < y + size; i++){
        for (int j = x; j < x + size; j++){
            if (imageMatrix[i][j] != init){
                check = false;
                break;
            }
        }
        if (!check){
            break;
        }
    }

    if (!check){
        func(y, x, size/3);
        func(y, x + size/3, size/3);
        func(y, x + size/3 + size/3, size/3);
        func(y + size/3, x, size/3);
        func(y + size/3, x + size/3, size/3);
        func(y + size/3, x + size/3 + size/3, size/3);
        func(y + size/3 + size/3, x, size/3);
        func(y + size/3 + size/3, x + size/3, size/3);
        func(y + size/3 + size/3, x + size/3 + size/3, size/3);
    }
    else {
        if (init == -1){
            m_one++;
        }
        else if (init == 0){
            zero++;
        }
        else {
            one++;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    imageMatrix.resize(n, vector<int>(n));

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> imageMatrix[i][j];
        }
    }

    func(0, 0, n);
    cout << m_one << '\n';
    cout << zero << '\n';
    cout << one << '\n';
    return 0;
}