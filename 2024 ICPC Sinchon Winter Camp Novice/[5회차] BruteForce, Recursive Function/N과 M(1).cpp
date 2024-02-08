#include <iostream>

using namespace std;

int n, m;
int a[10];
int isused[10];
void func(int p){
    if (p == m){
        for (int i = 0; i < m; i++){
            cout << a[i] << ' ';
        }
        cout << '\n';
        return ;
    }

    for (int i = 1; i <= n; i++){
        if (isused[i] == 0){
            a[p] = i;
            isused[i] = 1;
            func(p+1);
            isused[i] = 0;
        }
    }
}
int main(){
    cin >> n >> m;
    func(0);
    return 0;
}