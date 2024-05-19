#include <iostream>
using namespace std;

class Power{
    int kick;
    int punch;
public:
    Power(int kick = 0, int punch = 0){
        this->kick = kick;
        this->punch = punch;
    }
    void show(){
        cout << "kick=" << kick << ',' << "punch=" << punch << '\n';
    }
    friend Power operator++(Power& op1);
    friend Power operator++(Power& op1, int x);
};

Power operator++(Power& op1){
    op1.kick++;
    op1.punch++;
    return op1;
}
Power operator++(Power& op1, int x){
    Power tmp = op1;
    op1.kick++;
    op1.punch++;
    return tmp;
}
int main(){
    Power a(3,5), b;
    b = ++a;
    a.show();
    b.show();

    b = a++;
    a.show();
    b.show();
    return 0;
}