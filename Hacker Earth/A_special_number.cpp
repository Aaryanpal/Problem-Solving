#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<long long>

void solve()
{
    int n,sum=0;
    cin >> n;
    int m = n;
    int rem = n % 4;
    while(m>0)
    {
        sum += m%10;
        m=m/10;
    }
    if(sum%4==0){

    cout<<n<<endl;
    }
    else{
        cout<<rem+n<<endl;
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
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}