#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fr(i,a,n)  for(int i=a;i<n;i++)
#define fre(i,a,b)  for(int i=a;i<=b;i++)
#define endl '\n'
#define no cout << "NO" << endl
#define yes cout << "YES" << endl
#define mem(name, value) memset(name, value, sizeof(name))
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define all(v) (v).begin(), (v).end()
#define case cout << "Case " << t++ << ": ";
 
int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--)
	{
		int a, b;
		cin >> a >> b;
		int ans = abs(b - a);
		int cnt, res;
		if (ans == 0)
		{
			cout << 0 << endl;
		}
		else if (ans >= 10)
		{
			res = ans / 10;
			cnt = ans % 10;
			if (cnt == 0)
			{
				cout << res << endl;
			}
			else {
				cout << res + 1 << endl;
			}
		}
		else {
			cout << "1" << endl;
		}
 
	}
	return 0;
}
