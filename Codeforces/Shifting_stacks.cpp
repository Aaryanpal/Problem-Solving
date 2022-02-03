#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<long long>

void solve()
{
    ll t, n, a[105];
    bool ok = false;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n == 1)
    {
        cout << "YES" << endl;
        return;
    }
    ll have = a[0];
    a[0] = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[i - 1])
        {
            have += a[i] - (a[i - 1] + 1);
            a[i] = a[i - 1] + 1;
        }
        else if (a[i - 1] == a[i])
        {
            if (have > 0)
            {
                a[i]++;
                have--;
            }
        }
        else
        {
            ll gap = a[i - 1] - a[i] + 1;
            if (gap <= have)
            {
                a[i] += gap;
                have -= gap;
            }
        }
    }
    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[i - 1])
            ok = true;
        else
        {
            ok = false;
            break;
        }
    }

    if (ok)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    std::ios::sync_with_stdio(false);
    ll t;
    cin >> t;
    while (t--)
    {
        //cout << "Case #" << t << ": ";
        solve();
    }
    return 0;
}