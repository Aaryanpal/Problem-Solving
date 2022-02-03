#include <bits/stdc++.h> 
using namespace std;


#define ll long long int
#define vi vector<int>
#define vll vector<long long>


void solve() {
    ll n,m;
    cin>>n>>m;
    int x = n%10 + m%10;
    cout<<x;
}


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
std::ios::sync_with_stdio(false);
 ll t = 1;
 while(t--) {
     solve();
 }
 return 0;
}