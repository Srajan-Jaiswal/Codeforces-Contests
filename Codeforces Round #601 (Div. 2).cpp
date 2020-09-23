#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fr(i, a, b) for (int i = a; i < b; i++)
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
		int n,m; 
		cin>>n>>m;
        int a[n];
        fr(i,0,n)
		{
			cin>>a[i];
		}
        if(m<n || n==2){
          cout<<"-1"<<endl;
        }
		else
		{
		int ans=0;
        fr(i,0,n)
		{
          ans+=a[i];
        }
          ans*=2;
          cout<<ans<<endl;
          for( int i=1;i<n;i++){
            cout<<(i)<<" "<<(i+1)<<endl;
          }
          cout<<n<<" "<<"1"<<endl; 
		}
	}
	return 0;
}
