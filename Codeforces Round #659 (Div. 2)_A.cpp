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
	int n;
    cin>>n;
    int arr[n];
    vector<string> v;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int m = INT_MIN;
    for(int i=0;i<n;i++)
    {
        m = max(m,arr[i]);
    }
    string str;
    int i=0;
    m=m+10;
    while(m--){
      str += (i%26)+'a';
      i++;
    }
    v.push_back(str);
    for(int i=0;i<n;i++)
    {
        int size = arr[i];
        reverse(str.begin()+size,str.end());
        v.push_back(str);
    }
    for(string &str : v)
    {
        cout<<str<<endl;
    }
    str.clear();
    v.clear();
	}
}
