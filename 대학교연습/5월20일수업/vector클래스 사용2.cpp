#include <iostream>
#include <vector>
using namespace std;

int main(){
    int i, value;
    vector<int> v;

    for (int i = 0; i < 5; i++){
        cout << "�� �Է�:";
        cin >> value;
        v.push_back(value);
    }

    for (int i = 0; i < 5; i++){
        cout << v[i] << '\t';
    }
    cout << '\n';
    return 0;
    
}