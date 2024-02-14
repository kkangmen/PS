#include <iostream>
#include <vector>

using namespace std;

vector<vector<char>> imageMatrix;
int one = 0;
int zero = 0;
int m_one = 0;
void func(int y, int x, int size){
    char init = imageMatrix[y][x];

    for (int i = y; i < y + size; i++){
        for (int j = x; j < x + size; j++){
            if (imageMatrix[i][j] != init){
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
                if(imageMatrix[y][x] == 1){
                    
                }
            }
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    imageMatrix.resize(n, vector<char>(n));

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> imageMatrix[i][j];
        }
    }

    func(0, 0, n);
    return 0;
}