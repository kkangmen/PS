#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a, b, c;
    int max_num;

    while (1){
        cin >> a >> b >> c;

        if (a == 0 && b == 0 && c == 0){
            break;
        }
        else{
            max_num = max(a, max(b, c));

            if (a == max_num){
                if (b*b + c*c == a*a){
                    cout << "right" << '\n';
                }
                else {
                    cout << "wrong" << '\n';
                }
            }
            if (b == max_num){
                if (a*a + c*c == b*b){
                    cout << "right" << '\n';
                }
                else {
                    cout << "wrong" << '\n';
                }
            }
            if (c == max_num){
                if (a*a + b*b == c*c){
                    cout << "right" << '\n';
                }
                else {
                    cout << "wrong" << '\n';
                }
            }
        }
    }
    return 0;
}