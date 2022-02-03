#include <bits/stdc++.h> 
using namespace std;


#define ll long long int
#define vi vector<int>
#define vll vector<long long>


void solve() {
    int n,k,member=0;
    cin>>n>>k;
   
    for(int i=0;i<n;i++)
    {   
        int n;
        cin>>n;
       if(5-n>=k)
       member++;
    }
    int ans = member/3;
    cout<<ans;
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