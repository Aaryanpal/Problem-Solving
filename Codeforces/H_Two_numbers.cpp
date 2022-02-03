#include <bits/stdc++.h>
#include <cmath >
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<long long>

void solve()
{
    float n, f;
    cin >> n >> f;
    float x = n / f;
    cout << "floor " << n << " / " << f << " = " << floor(x) << "\n";
    cout << "ceil " << n << " / " << f << " = " << ceil(x) << "\n";
    cout << "round " << n << " / " << f << " = " << round(x);
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