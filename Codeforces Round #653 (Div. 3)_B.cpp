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
    int cnt2=0,cnt3=0;
    while(n%2==0 && n>1){
        n/=2;
        cnt2++;
    }
    while(n>1 && n%3==0){
        n /=3;
        cnt3++;
    }
    if(n>1){
        cout<<-1<<endl;
    }
    else if(cnt3 > cnt2){
        cout<<(cnt3+(cnt3-cnt2))<<endl;
    }
    else if(cnt3==cnt2){
        cout<<cnt2<<endl;
    }
    else{
        cout<<-1<<endl;
    }
	}
}
