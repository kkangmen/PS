#include <iostream>
using namespace std;

int sum(int a, int b){
    int ans = 0;
    for (int i = a; i <= b; i++){
        ans += i;
    }
    return ans;
}
int sum(int a){
    int ans = 0;
    for (int i = 0; i <= a; i++){
        ans += i;
    }
    return ans;
}

int main(){
    cout << sum(3,5) << '\n';
    cout << sum(3) << '\n';
    cout << sum(100) << '\n';
    return 0;
}