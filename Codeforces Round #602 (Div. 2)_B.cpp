#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fr(i, a, n) for (int i = a; i < n; i++)
#define fre(i, a, b) for (int i = a; i <= b; i++)
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
		int n;
		cin >> n;
		int q[n];
		for (int i = 1; i <= n; i++)
		{
			cin >> q[i];
		}
		set<int> s;
		vector<int> vec;
		bool flag = false;
		bool end = false;
		for (int i = 1; i <= n; i++)
		{
			s.insert(q[i]);
		}
		for (int i = 1; i <= n; i++)
		{
			if (q[i] >= i)
			{
				if (q[i] == q[i + 1])
				{
					if (!flag)
					{
						vec.pb(q[i]);
					}
					for (int j = 1; j <= i; j++)
					{
						if (s.find(j) == s.end())
						{
							vec.pb(j);
							s.insert(j);
							flag = true;
						}
					}
				}
				else
				{
					if (!flag)
					{
						vec.pb(q[i]);
					}
					else
					{
						flag = false;
					}
				}
			}
			else
			{
				end = true;
				break;
			}
		}
		if (!end)
		{
			for (auto it : vec)
			{
				cout << it << " ";
			}
			cout << endl;
		}
		else
		{
			cout << -1 << endl;
		}
	}
}
