#include <iostream>

using namespace std;

int n, m;
int a[10];
int isused[10];
void func(int p, int num){
    if (p == m){
        for (int i = 0; i < m; i++){
            cout << a[i] << ' ';
        }
        cout << '\n';
        return ;
    }

    for (int i = num; i <= n; i++){
        a[p] = i;
        isused[i] = 1;
        func(p+1, i);
        isused[i] = 0;
    }
}
int main(){
    cin >> n >> m;
    func(0 , 1);
    return 0;
}