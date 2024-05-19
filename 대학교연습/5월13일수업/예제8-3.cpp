#include <iostream>
#include <string>
using namespace std;

class TV{
    int size;
public:
    TV(){
        size = 20;
    }
    TV(int size){
        this->size = size;
    }
    int getsSize(){
        return size;
    }
};

class WideTV:public TV{
    bool videoIn;
public: 
    WideTV(int size, bool videoln):TV(size){
        this->videoIn = videoIn;
    }
    bool getVideoIn(){
        return videoIn;
    }
};

class SmartTV:public WideTV{
    string ipAddr;
public: 
    SmartTV(string ipAddr, int size):WideTV(size, true){
        this->ipAddr = ipAddr;
    }
    string getIpAddr(){
        return ipAddr;
    }
};
int main(){
    SmartTV htv("192.0.0.1", 32);
    cout << "size=" << htv.getsSize() << '\n';
    cout << "videoln=" << boolalpha << htv.getVideoIn() << '\n';
    cout << "IP=" << htv.getIpAddr() << '\n';
}