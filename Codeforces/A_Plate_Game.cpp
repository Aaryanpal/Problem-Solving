#include <bits/stdc++.h> 
using namespace std;


#define ll long long int
#define vi vector<int>
#define vll vector<long long>
#define  PI 3.14159265358979323846

void solve() {
    int a,b,r;
    cin>>a>>b>>r;
    
    if(2*r>min(a,b))
    cout<<"Second";
    else
    cout<<"First";

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