#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> v;

void prt(int u, int v){
    cout << u << ' ' << v << '\n';
}
int main(){
    int n, m;
    cin >> n >> m;
    
    prt(0,1);
    prt(0,2);
    m -= 2;

    for (int i = 3; i < n; i++){
        if (m){
            prt(0, i);
            m--;
        }
        else {
            prt(i-1, i);
        }
    }


    return 0;
}