#include <iostream>
#include <string>
#include <vector>
using namespace std;

int graph[51][51];
int m, n, k, row , column;

void dfs(int x, int y){
    if (x <= -1 || x >= row || y <= -1 || y >= column){
        return;
    }
    if (graph[x][y] == 0){
        return;
    }
    
    graph[x][y] = 0;
    dfs(x-1, y);
    dfs(x+1, y);
    dfs(x, y-1);
    dfs(x, y+1);
}
void reset(){
    
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int testcase;
    cin >> testcase;
    for (int i = 0; i < testcase; i++){
        int count = 0;
        cin >> m >> n >> k;
        for (int j = 0; j < k; j++){
            cin >> row >> column;
            graph[row][column] = 1;
        }

        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                if (graph[i][j] == 1){
                    dfs(i, j);
                    count++;
                }
            }
        }
        cout << count << '\n';
        reset();
    }
    return 0;
}