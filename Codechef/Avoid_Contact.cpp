#include <bits/stdc++.h> 
using namespace std;


#define ll long long int
#define vi vector<int>
#define vll vector<long long>


void solve() {
    int x,y;
    cin>>x>>y;

    if(x>y && y==0)
    {
        cout<<x<<endl;
    }
    else if(x==y)
    {
        cout<<(y*2)-1<<endl;
    }
    else{
        cout<<2*y + (x-y)<<endl;
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