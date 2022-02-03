#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<long long>
#define Pi 3.141592653

void solve()
{
    double R;
    cin >> R;
    cout << setprecision(12) << Pi * R * R;
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