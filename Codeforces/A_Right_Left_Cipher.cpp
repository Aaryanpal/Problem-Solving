#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<long long>

void solve()
{
    string s, sol;
    cin >> s;
    int size = s.length();
    int i = 0, j = size - 1;
    if (size <= 2)
    {
        cout << s;
    }
    else
    {
        if (size % 2 == 0)
        {
            while (i <= j)
            {
                sol.push_back(s[j]);
                sol.push_back(s[i]);
                j--, i++;
            }
            
        }
        else
        {
            int  len = s.size();
            int lim = len/2;
            for(int i=0; i<lim; i++)
            {
            sol += s[i];
            sol += s[len-i-1];
         }
        sol += s[lim];
        }
        reverse(sol.begin(), sol.end());

            cout << sol;
    }
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