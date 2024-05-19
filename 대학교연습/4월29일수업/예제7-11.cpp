#include <iostream>
using namespace std;

class Power{
private:
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
    friend Power operator+(int op1, Power op2);
};

Power operator+(int op1, Power op2){
    Power tmp;
    tmp.kick = op1 + op2.kick;
    tmp.punch = op1 + op2.punch;
    return tmp;
}
int main(){
    Power a(3,5), b;
    a.show();
    b.show();
    b = 2 + a;
    a.show();
    b.show();
    return 0;
}