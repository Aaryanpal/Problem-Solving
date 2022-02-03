#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<long long>

void solve()
{
    ll n;
    cin >> n;
    if (n % 7 == 0)
        cout << n << "\n";
    else
    {
        ll rem = n % 7;
        ll new_nu = 7 - rem;
        if (n % 10 >= 7)
        {
            cout << n - rem << endl;
        }
        else if (n % 10 <= 3)
        {
            cout << n + new_nu << endl;
        }
        else
        {
            ll new_nu2 = n % 10;
            if (new_nu2 >= rem)
            {
                cout << n - rem << endl;
            }
            else
            {
                cout << n + new_nu << endl;
            }
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}