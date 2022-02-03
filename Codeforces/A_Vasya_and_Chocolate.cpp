#include <bits/stdc++.h> 
using namespace std;


#define ll long long int
#define vi vector<int>
#define vll vector<long long>


void solve() {
    ll s,a,b,c;
    cin>>s>>a>>b>>c;
    ll cnt =s/c;
    ll x =cnt/a;
    x = x*b;
    cout<<cnt + x<<"\n";
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