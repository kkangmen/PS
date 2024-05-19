#include <iostream>
#include <string>
using namespace std;

class Point{
protected:
    int x, y;
public:
    void set(int x, int y){
        this->x = x;
        this->y = y;
    }
    void showPoint(){
        cout << "(" << x << ',' << y << ')' << '\n';
    }
};

class ColorPoint : public Point{
private:
    string color;
public:
    void setColor(string color){
        this->color = color;
    }
    void showColorPoint(){
        cout << color << '.';
        showPoint();
    }
    bool equals(ColorPoint p){
        if(x == p.x && y == p.y && color == p.color){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    Point p;
    p.set(2, 3);
    //오류
    //p.x = 5; 
    //p.y = 5;
    p.showPoint();

    ColorPoint cp;
    //오류
    //cp.x = 10;
    //cp.y = 10;
    cp.set(3,4);
    cp.setColor("Red");
    cp.showColorPoint();

    ColorPoint cp2;
    cp2.set(3,4);
    cp2.setColor("Red");
    cout << ((cp.equals(cp2))?"true":"false");
    
    return 0;
}