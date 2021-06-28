#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes "YES"
#define no "NO"
#define pb push_back
#define si size()
#define in " "
#define mone "-1"
#define zero "0"
#define one "1"
#define PI acos(-1)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    //cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        map<ll,ll>mp;
        ll a;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            mp[a]++;
        }
        cout<<mp.size()<<endl;
    }
    return 0;
}

