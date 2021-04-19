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
    cin>>t;
    while(t--){
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
         cin>>arr[i];
     }
     unordered_map<int,pair<int,int>> um;
     int cnt=1;
     for(int i=0;i<n;i++){
         if(um.find(arr[i])!=um.end()){
             cnt++;
             um[arr[i]]=make_pair(cnt,i+1);
         }
         else{
             um[arr[i]]=make_pair(1,i+1);
         }
     }
     int ans;
     for(auto it : um){
         if(it.second.first == 1){
            ans = it.second.second;
         }
     }
     cout<<ans<<endl;
    } 
}
