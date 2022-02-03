#include <bits/stdc++.h> 
using namespace std;


#define ll long long int
#define vi vector<int>
#define vll vector<long long>


void solve() {
    int n;
    cin>>n;
    set<int> s;
    for(int i=0;i<n;i++)
    {
        int n;
        cin>>n;
        s.insert(n);
    }
    auto it = s.begin();
    it++;
    if(s.begin()!=it && it != s.end())
    {
        cout<<*it;
    }else{cout<<"NO";}
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