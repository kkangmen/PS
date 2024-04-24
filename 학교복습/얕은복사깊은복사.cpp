#include <iostream>
using namespace std;

int main(){
    int *a = new int(3);
    int *b = new int(8);

    cout << "a狼 林家 = " << a << '\n';
    cout << "b狼 林家 = " << b << '\n';

    a = b; // 捐篮 汗荤 (林家汗荤)
    //*a = *b;
    *b = 10;

    cout << "a狼 林家 = " << a << '\n';
    cout << "b狼 林家 = " << b << '\n';

    cout << *a << '\n';
    cout << *b << '\n';

    delete a;
    delete b;
    return 0;
}