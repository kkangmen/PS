#include <iostream>
using namespace std;

char c = 'a';
char& find(){
    return c;
}

int main(){
    char& ref = find();
    ref = 'M';
    cout << "c= " << c << " ref = " << ref << '\n';

    char ch = find();
    cout << "ch = " << ch << '\n';

    find() = 'b';
    cout << "c = " << c << " ref = " << ref << '\n';
}