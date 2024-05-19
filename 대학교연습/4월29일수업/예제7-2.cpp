#include <iostream>
using namespace std;

class Rect;

class RectManager{
private:
public:
    bool equals(Rect r, Rect s);
};

class Rect{
private:
    int width;
    int height;
public:
    Rect(int width = 1, int height = 1){
        this->width = width;
        this->height = height;
    }
    friend bool RectManager::equals(Rect r, Rect s);
};

bool RectManager::equals(Rect r, Rect s){
    if (r.width == s.width && r.height == s.height){
        return true;
    }
    else{
        return false;
    }
};

int main(){
    Rect a(3,4), b(4,5);
    RectManager man;

    if (man.equals(a,b)){
        cout << "equal" << '\n';
    }
    else{
        cout << "not equal" << '\n';
    }
    return 0;
}