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

	int t;
	cin >> t;
	while (t--)
	{
	  int n,k;
	  cin>>n>>k;
      int i=1,res=k;
	  if(n>res){
	  	while(res<n)
	  	{
	  		i++;
	  		res = k*i;
	  	}
	  }
	  if(n==res)
	  {
	  	cout<<1<<endl;
	  }
	  int div,rem;
	  if(n<res){
	  	div = res/n;
        rem = res%n;
        if(rem==0){
        	cout<<div<<endl;
        }
        else{
	  	cout<<div+1<<endl;
	  }
	  }
	}
}
