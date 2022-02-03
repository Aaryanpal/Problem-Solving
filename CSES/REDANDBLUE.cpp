#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<long long>

void solve()
{
    ll r, b, d;
    cin >> r >> b >> d;
    ll differ = abs(r - b);
    ll mn = min(r, b);
    ll each = (differ + mn - 1) / mn;
    if (each <= d)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
        // cout << "Case #" << it+1 << ": ";
        solve();
    }
    return 0;
}