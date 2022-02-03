#include <bits/stdc++.h> 
using namespace std;


#define ll long long int
#define vi vector<int>
#define vll vector<long long>


void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    
    int length = count(s.begin(),s.end(),'1'), l2 = count(s.begin(),s.end(),'0');

    if(n==1)
    {
        cout<<"YES\n";
    }
    else if(n==2)
    {
        if(length == 0 || l2 == 0 )
        cout<<"NO\n";
        else
        cout<<"YES\n";
    }
    else{
        if(length%2!=0 && l2%2!=0   )
        cout<<"YES\n";
        else
        cout<<"NO\n";
    } 
}



int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
std::ios::sync_with_stdio(false);
 ll t;
 cin>>t;
 while(t--) {
     solve();
 }
 return 0;
}