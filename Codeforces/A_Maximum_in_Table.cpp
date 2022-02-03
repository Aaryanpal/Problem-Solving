#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<long long>

void solve()
{
    int n, max_ele = 0;
    cin >> n;
    int arr[n][n];
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0)
            {
                arr[i][j] = 1;
            }
            else if (j == 0)
            {
                arr[i][j] = 1;
            }
            else
            {
                arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
            }
        }
    }
    cout << arr[n - 1][n - 1];
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