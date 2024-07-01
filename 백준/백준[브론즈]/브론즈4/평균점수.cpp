#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    for (int i = 0; i < 5; i++){
        int num;
        cin >> num;
        v.push_back(num);
    }

    int sum = 0;
    for (int i = 0; i < 5; i++){
        if (v[i] < 40){
            v[i] = 40;
        }
        sum += v[i];
    }
    cout << sum/5 << '\n';
    return 0;
}