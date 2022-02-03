#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<long long>

void solve()
{
    int num, d, count = 2;
    cin >> num >> d;
    int arr[num];
    for (int i = 1; i <= num; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i <= num; i++)
    {
        int temp = arr[i] - arr[i - 1];
        if (temp > 2 * d)
        {
            count + 2;
        }
        if (temp == 2 * d)
        {
            count++;
        }
    }

    cout << count;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", (__acrt_iob_func(0)));
    freopen("output.txt", "w", (__acrt_iob_func(1)));
#endif
    std::ios::sync_with_stdio(false);
    ll n = 1;
    // cin >> n;
    while (n--){
        // cout << "Case #" << it << ": ";
        solve();
}
return 0;
}