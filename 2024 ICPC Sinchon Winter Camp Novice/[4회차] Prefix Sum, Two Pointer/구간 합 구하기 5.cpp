#include <iostream>

using namespace std;

int a[1025][1025];
int ps[1025][1025];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            ps[i][j] = ps[i-1][j] + ps[i][j-1] - ps[i-1][j-1] + a[i][j];
        }
    }

    while (m--){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        cout << ps[x2][y2] - ps[x1-1][y2] - ps[x2][y1-1] + ps[x1-1][y1-1] << '\n';
    }
    return 0;
}