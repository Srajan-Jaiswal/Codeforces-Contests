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
		int n;
		cin>>n;
		int l[n],r[n];
		fr(i,0,n)
		{
			cin>>l[i]>>r[i];
		}
		if(n<2)
		{
			cout<<"0"<<endl;
		}
		else
		{
		sort(l,l+n);
		sort(r,r+n);
		if(l[n-1]-r[0]<0)
		{
			cout<<0<<endl;
		}
		else{
		cout<<l[n-1]-r[0]<<endl;
		}
		}
	}
}
