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
 
int fib(int n) 
{ 
    int sum = 0;
   for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    return sum;
} 
 
int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
	  int x;
      cin>>x;
      int i=1,ans1,ans2,fin;
      if(x==0)
      {
          cout<<0<<endl;
      }
      while(i <= x)
      {
         if(fib(i)==x)
        {
            cout<<i<<endl;
            break;
        }
        else if(fib(i)>x)
        {
            int mod;
            ans1 = fib(i);
            ans2 = fib(i-1);
            fin = i-1;
            if(abs(ans1-x) <= abs(ans2-x)){
                mod = abs(ans1-x);
                fin = i;
                 cout<<mod+fin<<endl;
            }
            else{
                mod = abs(ans2-x);
                fin = i-1;
                 cout<<mod+fin<<endl;
            }
             //int mod =  min(abs(ans1-x),abs(ans2-x));
    
            break;
        }
        i++;
      }
     // cout<<fib(9)<<endl;
	}
}
