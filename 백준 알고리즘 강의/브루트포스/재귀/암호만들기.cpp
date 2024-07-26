#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int l, c;
char alpha[15];
bool isused[15];
char ans[15];
char vowel[5] = {'a', 'e', 'i', 'o', 'u'};
bool isvowel;
void go(int length, int start)
{
    if (length == l)
    {
        int vowel_cnt = 0;
        int consonent_cnt = 0;
        for (int i = 0; i < l; i++)
        {
            isvowel = false;
            for (int j = 0; j < 5; j++)
            {
                if (ans[i] == vowel[j])
                {
                    isvowel = true;
                }
            }
            if (isvowel)
            {
                vowel_cnt++;
            }
            else
            {
                consonent_cnt++;
            }
        }

        if (vowel_cnt >= 1 && consonent_cnt >= 2){
            for (int i = 0; i < l; i++){
                cout << ans[i];
            }
            cout << '\n';
        }
    }

    for (int i = start; i < c; i++)
    {
        if (isused[i] == false)
        {
            isused[i] = true;
            ans[length] = alpha[i];
            go(length + 1, i + 1);
            isused[i] = false;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> l >> c;

    for (int i = 0; i < c; i++)
    {
        cin >> alpha[i];
    }

    sort(alpha, alpha + c);

    go(0, 0);
    // for (int i = 0; i < c; i++){
    //     cout << alpha[i] << ' ';
    // }
    return 0;
}