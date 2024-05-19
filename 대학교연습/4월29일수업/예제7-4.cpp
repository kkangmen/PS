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
    void show();
    Power operator+ (Power op2);
};

void Power::show(){
    cout << "kick=" << kick << ',' << "punch=" << punch << '\n';
}

Power Power::operator+(Power op2){
    Power tmp;
    tmp.kick = this->kick + op2.kick;
    tmp.punch = this->punch + op2.punch;
    return tmp;
    //위 4줄을 한번에 처리할 수 있다.
    //return Power(this->kick + op2.kick, this->punch + op2.punch);
}

int main(){
    Power a(3,5), b(4,6), c;
    c = a + b;
    a.show();
    b.show();
    c.show();
    return 0;
}

