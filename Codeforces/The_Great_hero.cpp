#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<long long>

void solve()
{
    ll A, B, n;
    ll mx = 0;
    cin >> A >> B >> n;
    ll ap[n], hv[n];
    for (int i = 0; i < n; i++)
    {
        cin>>ap[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>hv[i];
        ll cnt = hv[i]/A;
        if(hv[i]%A)
        {
            cnt++;
        }
        B -= cnt*ap[i];
        mx = max(mx, ap[i]);
    }
    if(B+mx > 0)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
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