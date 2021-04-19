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
     int a,b;
     cin>>a>>b;
     string str;
     cin>>str;
     int n = str.length();
     int i=0,j=n-1;
     bool ans =true;
     while(i<j){
         
         if(str[i]=='?' && str[j]=='?'){
           if(a>b){
               str[i]='0';
               str[j]='0';
               a=-2;
           }
           else{
               str[i]='1';
               str[j]='1';
               i++;
               j--;
               b-=2;
           }
         }
         if(str[i]==str[j]){
             i++;
             j--;
             continue;
         }
         if(str[i]=='0' && str[j]=='?'){
             if(a>0){
             str[j]='0';
             a--;
             }
             else{
                 ans = false;
                 break;
             }
         }
         if(str[i]=='1' && str[j]=='?'){
             if(b>0){
             str[j]='1';
             b--;
             }
             else{
                 ans = false;
                 break;
             }
         }
         if(str[i]=='?' && str[j]=='0'){
             if(a>0){
             str[i]='0';
             a--;
             }
             else{
                 ans = false;
                 break;
             }
         }
         if(str[i]=='?' && str[j]=='1'){
             if(b>0){
             str[i]='1';
             b--;

             }
             else{
                 ans = false;
                 break;
             }
         }
            i++;
            j--;
     }
     if(!ans){
         cout<<"-1"<<endl;
     }
     else{
         cout<<str<<endl;
     }
     
     
    } 
}
