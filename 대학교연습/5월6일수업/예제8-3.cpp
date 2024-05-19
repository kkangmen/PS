#include <iostream>
#include <string>
using namespace std;

class TV{
private:
    int size;
public:
    TV(){size = 20;}
    TV(int size){
        this->size = size;
    }
    int getSize(){
        return size;
    }
};

class WideTV : public TV{
private:
    bool videoln;
public:
    WideTV(int size, bool videoln) : TV(size){
        this->videoln = videoln;
    }
    bool getVideoln(){
        return videoln;
    }
};

class SmartTV : public WideTV{
private:
    string ipAddr;
public:
    SmartTV(string ipAddr, int size) : WideTV(size, true){
        this->ipAddr = ipAddr;
    }
    string getipAddr(){
        return ipAddr;
    }
};

int main(){
    SmartTV htv("192.0.0.1", 32);
    cout << htv.getSize() << '\n';
    cout << boolalpha << htv.getVideoln() << '\n';
    cout << htv.getipAddr() << '\n';
}