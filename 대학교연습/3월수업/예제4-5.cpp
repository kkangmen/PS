#include <iostream>
using namespace std;

int main(){
    int *p = new int;

    if(!p){
        cout << "메모리를 할당할 수 없습니다." << '\n';
        return 0;
    }

    *p = 5;
    int n = *p;
    cout << "*p = " << *p << '\n';
    cout << "n = " << n << '\n';

    delete p;
    
    return 0;
}