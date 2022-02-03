#include <bits/stdc++.h> 
using namespace std;


#define ll long long int
#define vi vector<int>
#define vll vector<long long>


void solve() {
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=n-1;i++)
    {
        for(int j=0;j<=n-1;j++)
        {
            for(int k=0;k<=n-1;k++)
            {
                if(k!=j)
                {
                    if(arr[i]==arr[j]+arr[k])
                    {
                        cout<<i+1<<" "<<j+1<<" "<<k+1<<" "<<endl;
                        return ;
                    }
                }
            }
        }
    }
    cout<<-1;
}



int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
std::ios::sync_with_stdio(false);
 ll t = 1;
 while(t--) {
     solve();
 }
 return 0;
}