#include <bits/stdc++.h> 
using namespace std;


#define ll long long int
#define vi vector<int>
#define vll vector<long long>


void solve() {
    ll n;
    cin>>n;
    cout<<n<<" ";
    while(n!=1){
        if(n%2==0)
        {
            n=n/2;
            cout<<n<<" ";
        }else{
            n=(n*3)+1;
            cout<<n<<" ";
        }
    }

}



int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
std::ios::sync_with_stdio(false);
 ll t = 1;
 //cin >> t;
 while(t--) {
     //cout << "Case #" << t << ": ";
     solve();
 }
 return 0;
}