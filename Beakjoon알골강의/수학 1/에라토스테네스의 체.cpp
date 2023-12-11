// #include <iostream>
// #include <vector>

// using namespace std;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     int n, k;
//     int cnt = 0;

//     cin >> n >> k;

//     vector<bool> v (n + 1, true);

//     for (int i = 2; i <= n; i++){
//         for (int j = i; i <= n; j += i){
//             if (v[j]){
//                 v[j] = false;
//                 cnt++;
//                 if (cnt == k){
//                     cout << j << endl;

//                     return 0;
//                 }
//             }
//         }
//     }

//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, k;
	int cnt(0);
	cin >> n >> k;
	vector<int> prime(n + 1);

	for (int i = 2; i <= n; i++)
	{
		prime[i] = i;
	}

	for (int i = 2; i <= n; i++)
	{
		for (int j = i; j <= n; j += i)
		{
			if (prime[j] != 0)
			{
				prime[j] = 0;
				cnt++;
				if (cnt == k)
				{
					cout << j << '\n';
					return 0;
				}
			}
		}
	}
	return 0;
}