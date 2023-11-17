#include <iostream>

using namespace std;

int main(){
    int num;
    int div_num[42] = {};

    for (int i = 0; i < 10; i++){
        cin >> num;
        div_num[num%42]++;
    }

    int result = 0;
    for (int i : div_num){
        if (i > 0){
            result++;
        }
    }
    cout << result;

    return 0;
}