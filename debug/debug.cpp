#include <iostream>

using namespace std;

int main(){
    int n;
    int cnt = 0;
 

    cin >> n;

    if (n < 100){
        cout << n << '\n';
    }
    else {
        cnt = 99;

        for (int i = 100; i <= n; i++){
            int hun = i / 100;
            int ten = (i / 10) % 10;
            int one = i % 10;

            if (hun - ten == ten - one){
                cnt++;
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}