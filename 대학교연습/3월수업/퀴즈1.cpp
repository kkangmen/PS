#include <iostream>

using namespace std;

class Point{
    private:
    int x, y;
    public:
    void SetXY(int, int);
    void Print();
    // void SetXY (int a, int b){
    //     x = a;
    //     y = b;
    // }
    // void Print(){
    //     cout << x << y << '\n';
    // }
};

void Point::SetXY(int a, int b){
    x = a;
    y = b;
}

void Point::Print(){
    cout << x << y << '\n';
}
int main(){
    Point P1;
    P1.SetXY(3,4);
    P1.Print();
    return 0;
}