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
	
		int n;
		cin >> n;
		int arr[n];
		fr(i, 0, n)
		{
			cin >> arr[i];
		}
		set<int> s1;
		set<int> s2;
		bool flag = true;
		int cnt = 0;
		vector<int> ans;
		fr(i, 0, n)
		{
			if (arr[i] > 0)
			{
				if (s1.find(arr[i]) == s1.end())
				{
					s1.insert(arr[i]);
				}
				else
				{
					flag = false;
					break;
				}
			}
			else if (arr[i] < 0)
			{
				if (s1.find(-arr[i]) != s1.end()) // s1 me  hai
				{
					if (s2.find(-arr[i]) == s2.end()) // s2 me  nahi hai
					{
						s2.insert(-arr[i]);
					}
					else
					{
						flag = false;
					}
				}
				else
				{
					flag = false;
					break;
				}
			}
			cnt++;
			if (s1.size() == s2.size())
			{
				if (s2.size() != 0)
				{
					s1.clear();
					s2.clear();
					ans.push_back(cnt);
					cnt = 0;
				}
			}
		}
		if (s1.size() == s2.size())
		{
			if (s2.size() != 0)
			{
				s1.clear();
				s2.clear();
				ans.push_back(cnt);
				cnt = 0;
			}
		}
		else
		{
			flag = false;
		}
		if (flag)
		{
			cout << ans.size() << endl;
			for (int i = 0; i < ans.size(); i++)
			{
				cout << ans[i] << " ";
			}
			cout << endl;
		}
		else
		{
			cout << "-1" << endl;
		}
}
