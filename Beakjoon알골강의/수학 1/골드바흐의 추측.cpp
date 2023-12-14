#include <iostream>
#include <vector>

using namespace std;

void find_decimal1(int);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<bool> v (1000001, true);

    for (int i = 3; i <= 1000001; i += 2){
        if (v[i]){
            for (int j = i + i; j <= 1000001; j += i){
                v[j] = false;
            }
        }
    }

    while (1){
        int n;

        cin >> n;

        if (n == 0){
            break;
        }

        else {
            int result = 0;
            for (int i = 3; i < v.size(); i += 2){
                int big_decimal = 0;

                if (v[i]){
                    big_decimal = n - i;
                    if (v[big_decimal]){
                        result++;
                        cout << n << " = " << i << " + " << big_decimal << '\n';
                        break;
                    }
                }
            }

            if (result == 0){
                cout << "Goldbach's conjecture is wrong." << '\n';
                }
            }
        }

    
    return 0;
}

