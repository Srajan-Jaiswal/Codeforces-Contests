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
 int t;
 cin>>t;
 while(t--){
     int n,k;
     cin>>n>>k;
     if(k>=double(n)/2) cout<<-1;
     else{
     vector<int> v;
     for(int i=1;i<=n;i++) v.push_back(i);
     int i=1,j=2;
     while(k>0){
      swap(v[i],v[j]);
      i+=2;
      j+=2;
      k--;
     }
     for(int m=0;m<n;m++) cout<<v[m]<<" ";
     } 
     cout<<endl;
 }
}
