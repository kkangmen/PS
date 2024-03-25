#include <iostream>

using namespace std;

class Complex{
private:
    int real;
    int image;
public:
    Complex(int x, int y);
    void showComlex(){
        cout << real << ' ' << image << '\n';
    }
};

Complex::Complex(int x, int y){
    real = x;
    image = y;
}

int main(){
    Complex x(4, 5);
    Complex y(20, 10);
    x.showComlex();
    y.showComlex();
    return 0;
}