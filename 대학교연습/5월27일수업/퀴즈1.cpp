#include <iostream>
using namespace std;

template <class T>
T Sum(T a, T b){
    return a + b;
}

int main(){
    cout << Sum(1,2) << '\n';
    cout << Sum(1.1, 2.2) << '\n';
    cout << Sum('1', '2') << '\n';
}