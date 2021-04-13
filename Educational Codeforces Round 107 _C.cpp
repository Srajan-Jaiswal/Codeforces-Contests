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
 int n,q;
 cin>>n>>q;
 int deck[n];
 int quer[q];
 for(int i=0;i<n;i++){
     cin>>deck[i];
 }
 for(int i=0;i<q;i++){
     cin>>quer[i];
 }
 list<int> l;
 for(int i=0;i<n;i++){
     l.push_back(deck[i]);
 }
 vector<int> v;
 int k = 0; 
 for(int i=0;i<q;i++){
     int cnt=0;
    for(auto it : l){
        if(it==quer[i]){
            /*for(auto it1 : l){
                cout<< it1<<" ";
            }*/
            //cout<<endl;
            v.push_back(cnt);
            l.remove(quer[i]);
            l.push_front(quer[i]);
            
            break;
        }
        cnt++;
    }
    
 }
 for(int i=0;i<v.size();i++){
     cout<<v[i]<<endl;
 }
 
}
