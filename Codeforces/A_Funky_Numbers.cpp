#include <bits/stdc++.h> 
using namespace std;


#define ll long long int
#define vi vector<int>
#define vll vector<long long>


void solve() {
    ll n,i;
    cin>>n;
    vector<ll>v;
    for(i=1;i<100001;i++)
    {
    	v.push_back(i*(i+1)/2);
    } 
    for(i=0;i<100000;i++)
    {
    	ll x;
    	x=n-v[i];
    	if(binary_search(v.begin(),v.end(),x))
    	{
    		cout<<"YES\n";
    		return ;
    	}
    }
    cout<<"NO\n";
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