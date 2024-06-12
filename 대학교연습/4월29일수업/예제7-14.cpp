#include <iostream>
using namespace std;

class Complex{
    friend ostream& operator<<(ostream& os, const Complex &v);
private:
    double x, y;
public:
    Complex(double x = 0.0, double y = 0.0){
        this->x = x;
        this->y = y;
    }
    Complex operator+(const Complex &v2) const{
        Complex v;
        v.x = this->x + v2.x;
        v.y = this->y + v2.y;
        return v;
    }
    void display(){
        cout << "(" << x << ',' << y << 'i' << ")" << '\n';
    }
};

ostream& operator<<(ostream& os, const Complex& v){
   os << '(' << v.x << ',' << v.y << 'i' << ')' << '\n';
    return os;
} 

int main(){
    Complex v1(1.0, 2.0), v2(3.0, 4.0);
    Complex v3 = v1 + v2;
    cout << v1 << v2 << v3;
    return 0;
}