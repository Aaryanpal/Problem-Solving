#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<long long>

void solve()
{
    int n;
    long long num;
    char t;
    float d;
    double dd;
    cin>>n>>num>>t>>d>>dd;
    cout<<n<<"\n"<<num<<"\n"<<t<<"\n"<<d<<"\n"<<dd;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    std::ios::sync_with_stdio(false);
    ll t;
    t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}