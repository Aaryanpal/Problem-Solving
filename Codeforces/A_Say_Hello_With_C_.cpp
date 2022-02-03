#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<long long>

void solve()
{
    string s;
    cin >> s;
    cout << "Hello, " << s;
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
    while (t--)
    {
        //cout << "Case #" << it + 1 << ": ";
        solve();
    }
    return 0;
}