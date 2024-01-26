#include <iostream>
#include <algorithm>

using namespace std;

int d[501][501];
int triangle[501][501];

int main(){
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            cin >> triangle[i][j];
        }
    }

    d[1][1] = triangle[1][1];
    for (int i = 2; i <= n; i++){
        for (int j = 1; j <= i; j++){
            if (j == 1){
                d[i][j] = d[i-1][1] + triangle[i][j];
            }
            else if (j == i){
                d[i][j] = d[i-1][j-1] + triangle[i][j];
            }
            else {
                d[i][j] = max(d[i-1][j-1], d[i-1][j]) + triangle[i][j];
            }
        }
    }

    int max_ans = d[n][1];
    for (int i = 2; i <= n; i++){
        if (max_ans < d[n][i]){
            max_ans = d[n][i];
        }
    }
    cout << max_ans << '\n';
    return 0;
}