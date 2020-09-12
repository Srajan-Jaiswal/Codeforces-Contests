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
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		int cnt = 0;
		set<int> s;
		for (int i = 0; i < n; i++)
		{
			s.insert(arr[i]);
		}
		for (auto it : s)
		{
			if (it == cnt)
			{
				cnt++;
			}
			else
			{
				break;
			}
		}
		int ans = 0;
		map<int, int> m;
		for (int i = 0; i < n; i++)
		{
			m[arr[i]]++;
		}
		//for(auto it: m)
		//{
		//	cout<<it.first<<" "<<it.second<<endl;
		//}
		for (auto it : m)
		{
			if (it.ff == ans)
			{
				if (it.ss < 2)
				{
					ans = it.ff;
					break;
				}
				else
				{
					ans++;
				}
			}
			else
			{
				break;
			}
		}
		cout << ans + cnt << endl;
	}
}
