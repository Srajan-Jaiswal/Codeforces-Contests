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
		int a[n], b[n];
		fr(i, 0, n)
		{
			cin >> a[i];
		}
		fr(i, 0, n)
		{
			cin >> b[i];
		}
		map<int, int> m2;
		vector<int> vec;
		bool flag = true;
		fr(i, 0, n)
		{
			int diff = b[i] - a[i];
			if (diff != 0)
			{
				m2[diff]++;
				vec.push_back(i);
			}
		}
		if (m2.size() == 1 && m2.begin()->first > 0)
		{

			fr(i, 0, vec.size() - 1)
			{
				if (vec[i + 1] - vec[i] > 1)
				{
					flag = false;
				}
			}
			if (flag)
			{
				yes;
			}
			else
			{
				no;
			}
		}
		else if (m2.empty())
		{
			yes;
		}
		else
		{
			no;
		}
		m2.clear();
	}
}
