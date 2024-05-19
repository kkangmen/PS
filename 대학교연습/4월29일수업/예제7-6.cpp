// #include <iostream>
// using namespace std;

// class Power{
// private:
//     int kick;
//     int punch;
// public:
//     Power(int kick = 0, int punch = 0){
//         this->kick = kick;
//         this->punch = punch;
//     }
//     void show(){
//         cout << "kick=" << kick << ',' << "punch=" << punch << '\n';
//     }
//     Power operator+=(Power op2);
// };

// Power Power::operator+=(Power op2){
//     kick += op2.kick;
//     punch += op2.punch;
//     return *this; 
// }

// int main(){
//     Power a(3,5), b(4,6), c;
//     a.show();
//     b.show();
//     c = a += b;
//     a.show();
//     c.show();
//     return 0;
// }

//전역함수 형태
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
    friend Power operator+=(Power& op1, Power op2);
};

Power operator+=(Power& op1, Power op2){
    op1.kick += op2.kick;
    op1.punch += op2.punch;
    return op1;
}

int main(){
    Power a(3,5), b(4,6), c;
    a.show();
    b.show();
    c = a += b;
    a.show();
    c.show();
    return 0;
}