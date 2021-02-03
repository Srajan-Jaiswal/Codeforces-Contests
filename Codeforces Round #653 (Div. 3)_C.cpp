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
     string s;
     cin>>s;
    int cnt=0,res=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='('){
            cnt++;
        }
        else if(s[i]==')'){
            if(cnt>0){
                cnt--;
            }
            else if(cnt==0){
                res++;
            }
        }
    }
    cout<<res<<endl;
	}
}
