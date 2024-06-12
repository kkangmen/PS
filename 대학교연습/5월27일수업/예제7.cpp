#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void PrintVector(vector<int> v, string name){
    vector<int>::iterator it;
    cout << ">> " << name << " : ";
    for (it = v.begin(); it != v.end(); it++){
        cout << *it << ' ';
    }
    cout << '\n';
}

bool IntCompare(int a, int b){
    return a > b ? true : false;
}

int main(){
    vector<int> v = {22, 55, 31, 77, 65, 99};
    PrintVector(v, "���� ��");
    sort(v.begin(), v.end());
    PrintVector(v, "���� �� ��������");
    sort(v.begin(), v.end(), IntCompare);
    PrintVector(v, "���� �� ��������");
}