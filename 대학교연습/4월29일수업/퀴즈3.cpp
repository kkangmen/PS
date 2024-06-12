#include <iostream>
using namespace std;

class Complex{
private:
    double x,y;
public:
    friend istream& operator>>(istream& is, Complex& v);
    friend ostream& operator<<(ostream& os, Complex& v);
    Complex(double x = 0, double y = 0){
        this->x = x;
        this->y = y;
    }
    Complex operator+(const Complex& v2) const{
        Complex v;
        v.x = x + v2.x;
        v.y = y + v2.y;
        return v;
    }
    void display(){
        cout << '(' << x << ',' << y << 'i' << ')' << '\n';
    }
};

istream& operator>>(istream& is, Complex &v){
    is >> v.x >> v.y;
    return is;
}
ostream& operator<<(ostream& os, Complex &v){
    os << '(' << v.x << ',' << v.y << 'i' << ')' << '\n';
    return os;
}
int main(){
    cout << "�� ���� ���Ҽ� ���� �Է��϶�: ";
    Complex v1, v2;
    cin >> v1 >> v2;
    Complex v3 = v1 + v2;
    cout << v1 << v2 << v3;

    return 0;
}