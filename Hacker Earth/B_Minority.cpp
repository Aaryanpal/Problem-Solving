#include <bits/stdc++.h> 
using namespace std;


#define ll long long int
#define vi vector<int>
#define vll vector<long long>


void solve() {
    //variable declaring
        string s;
        cin>>s;
        ll n = s.length();
        ll ans = 0, oone = 0,zeroo=0;

            //loopint the statement
        for(ll i=0;i<n;i++)
        {
            if(s[i]== '1')
            {
                oone++;
            }else{
                zeroo++;
            }

        //logic
            if(oone!=zeroo)
            {
                ans = min(oone,zeroo);
            }
        }


    cout<<ans<<endl;
}



int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
std::ios::sync_with_stdio(false);
 ll t;
 cin>>t;
 while(t--) {
     solve();
 }
 return 0;
}