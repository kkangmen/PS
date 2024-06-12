#include <iostream>
#include <string>
using namespace std;

class Converter{
protected:
    double ratio;
    virtual double convert(double src) = 0;
    virtual string getSourceString() = 0;
    virtual string getDestString() = 0;
public:
    Converter(double ratio){
        this->ratio = ratio;
    }
    virtual void run() = 0;
};

class WonToDollar : public Converter{
protected:
    string getSourceString() {return "¿ø";}
    string getDestString() {return "´Þ·¯";}
    double convert(double src) {this->ratio = ratio;}

};

int main(){
    WonToDollar wd(1170);
    wd.run();
}