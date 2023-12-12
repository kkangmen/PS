#include <iostream>
#include <vector>

using namespace std;

void find_decimal1(int);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    while (1){
        int n;

        cin >> n;

        if (n == 0){
            break;
        }

        else {
            find_decimal1(n);
        }

    }
    return 0;
}

void find_decimal1(int a){
    vector<bool> v (a+1, true);
    int result = 0;
    for (int i = 2; i <= a; i++){
        if (v[i]){
            for (int j = i + i; j <= a; j += i){
                v[j] = false;
            }
        }
    }

    for (int i = 3; i < v.size(); i++){
        int big_decimal = 0;

        if (v[i]){
            big_decimal = a - i;
            if (v[big_decimal]){
                result++;
                cout << a << " = " << i << " + " << big_decimal << '\n';
                break;
            }
        }
    }

    if (result == 0){
        cout << "Goldbach's conjecture is wrong." << '\n';
    }
}