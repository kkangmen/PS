#include <iostream>
using namespace std;

class Point{
private:
    int x;
    int y;
public:
    void setxy(int x, int y){
        this->x = x;
        this->y = y;
    }
    void print(){
        cout << x << ' ' << y << '\n';
    }
    
};
int main(){
    Point p1;
    p1.setxy(3,4);
    p1.print();
    return 0;
}