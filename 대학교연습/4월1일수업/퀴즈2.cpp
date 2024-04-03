#include <iostream>
#include <string>
using namespace std;

class Date{
private:
    int day;
    int month;
    int year;
public:
    Date(int y, int m, int d);
    Date(string s);
    void show();
    int getYear(){
        return year;
    }
    int getMonth(){
        return month;
    }
    int getDay(){
        return day;
    }
};
Date::Date(int y, int m, int d){
    year = y;
    month = m;
    day = d;
}
Date::Date(string s){
    int index1 = s.find('/');
    string year_str = s.substr(0, index1);
    year = stoi(year_str);
    int index2 = s.find('/', index1+1);
    string month_str = s.substr(index1+1, index2-index1-1);
    month = stoi(month_str);
    string day_str = s.substr(index2+1);
    day = stoi(day_str);
}
void Date::show(){
    cout << year << "³â" << month << "¿ù" << day << "ÀÏ" << '\n';
}
int main(){
    Date birth(2014, 3, 20);
    Date independence_day("1945/8/15");
    independence_day.show();
    birth.show();
    cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << '\n';
    return 0;
}