#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<long long>

void solve()
{
    string s;
    cin >> s;
    ll count = 1, max_coun = 0;
    ll size = s.length();
    for (int i = 0; i < size - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            count++;
        }
        else
        {
            max_coun = max(max_coun, count);
            count = 1;
        }
    }
    max_coun = max(max_coun, count);
    cout << max_coun << "\n";
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    std::ios::sync_with_stdio(false);
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        // cout << "Case #" << it+1 << ": ";
        solve();
    }
    return 0;
}