#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isvisted[4][5];
int cnt = 0;

void dfs(int row, int column){
    
    isvisted[row][column] = true;
    dfs(row-1, column);
    dfs()
}

int main(){
    int n, m;
    cin >> n >> m;
    string str;

    vector<vector<int>> ice(n, vector<int>(m,0));
    for (int i = 0; i < n; i++){
        cin >> str;
        for (int j = 0;  j < m; j++){
            ice[i][j] = str[j]-'0';
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (ice[i][j] == 0 && isvisted[i][j] == false){
                dfs(i, j);
            }
        }
    }
    return 0;
}