#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1;
    string s2;
    string temp;
    int cnt = 0, m = 0;
    
    cin >> s1 >> s2;
    if (s1.size() > s2.size()) {
        temp = s1;
        s1 = s2;
        s2 = temp;
    }
    
    for(int k=0; k<s1.size(); k++)  {
        for (int i = k; i < s1.size(); i++) {
            for (int j = 0; j < s2.size(); j++) {
                if (s1[i] == s2[j]) {
                    cnt++;
                    i += 1;
                }
            }
        }
        if (m < cnt) m = cnt;
        cnt = 0;
    }
    cout << m;
}