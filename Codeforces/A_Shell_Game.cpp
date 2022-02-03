#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<long long>

// void swap(int &l,int &r,vector<int> &v)
// {
//     int temp = 0;
//     temp = v[l];
//     v[l] = v[r];
//     v[r] =temp;
// }
void solve()
{
    int index_cup;
    cin >> index_cup;
    vi box(4, 0);
    box[index_cup] = 1;
    for (int i = 1; i <= 3; i++)
    {
        int l, r;
        cin >> l >> r;
        swap(box[l],box[r]);
    }
    for (int i = 1; i <= 3; i++)
    {
        if (box[i] == 1){
            cout << i;
            break;

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
    ll t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}