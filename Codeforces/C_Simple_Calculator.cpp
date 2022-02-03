#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<long long>

void solve()
{
    ll x, y;
    cin >> x >> y;
    cout << x << " + " << y << " = " << x + y << "\n";
    cout << x << " * " << y << " = " << x * y << "\n";
    cout << x << " - " << y << " = " << x - y;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    std::ios::sync_with_stdio(false);
    ll t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}