#include <iostream>
using namespace std;

class Color{
private:
    int red, green, blue;
public:
    Color() {red = green = blue = 0;}
    Color(int r, int g, int b){red = r; green = g; blue = b;}
    void setColor(int r, int g, int b){red = r; green = g; blue = b;}
    void show(){cout << red << ' ' << green << ' ' << blue << '\n';}
};

int main(){
    Color screenColor(255, 0, 0);
    Color *p;
    p = &screenColor;
    p -> show();
    Color colors[3];
    p = colors;

//(5) p와 setColor()를 이용하여 colors[0], colors[1], colors[2]가 각각 빨강, 초록, 파랑색을 가지도록
    p[0].setColor(255, 0, 0);
    p[1].setColor(0, 255, 0);
    p[2].setColor(0, 0, 255);

    for (int i = 0; i < 3; i++){
        p[i].show();
    }
}
