#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    string address("¼­¿ï½Ã ¼ººÏ±¸ »ï¼±µ¿ 389");
    string copyAddress(address);

    char text[] = {'L','o','v','e',' ','C','+','+','\0'};
    string title(text);

    cout << str << '\n';
    cout << address << '\n';
    cout << copyAddress << '\n';
    cout << title << '\n';
}