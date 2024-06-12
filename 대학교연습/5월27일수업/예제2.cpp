#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int size = 3;
    vector<pair<int, string>> vPair;
    int iArray[] = {10, 20, 30};
    string strArray[] = {"Seoul" , "Busan" , "Junju"};

    for (int i = 0; i < size; i++){
        //vPair.push_back(make_pair(iArray[i], strArray[i]));
        vPair[i].first = iArray[i];
        vPair[i].second = strArray[i];
    }
    for (int i = 0; i < size; i++){
        cout << "vPair[" << i << "] = " << "( " << vPair[i].first << " " << vPair[i].second << " )" << '\n';
    }
}