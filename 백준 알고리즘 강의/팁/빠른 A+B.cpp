#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int testcase;
    cin >> testcase;

    for (int i = 0; i < testcase; i++){
        int A, B;
        cin >> A >> B;

        cout << A + B << '\n';
    }
    return 0;
}