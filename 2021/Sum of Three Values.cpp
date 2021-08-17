#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define INF        9223372036854775806
#define MINF       -9223372036854775806
#define eps          1e-8
#define gcd __gcd
#define yes "YES"
#define no "NO"
#define pb push_back
#define si size()
#define in " "
#define mone "-1"
#define zero "0"
#define one "1"
#define PI acos(-1)
#define endl "\n"
const ll mod=1e9+7;
const double pi=2*acos(0.0);
ll lcm(ll a,ll b)
{
    return (a/(__gcd(a, b)))*b;
}
ll big_mod(ll a,ll b)
{
    if(b==0)return 1;
    else if(b==1)return a;
    if(b%2==0)
    {
        ll tm=big_mod(a,b/2);
        return ((tm%mod)*(tm%mod))%mod;
    }
    else return ((a%mod)*(big_mod(a,b-1)%mod))%mod;
}
int main()
{
    ll n,sum,f=0;
    cin>>n>>sum;
    ll a[n+10];
    map<ll,ll>mp;
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
        mp[a[i]]=i;
    }
    for(ll i=0; i<n; i++)
    {
        for(ll j=i+1; j<n; j++)
        {
            ll s=a[i]+a[j];
            s=sum-s;
            if(mp.find(s)!=mp.end()&&mp[s]!=i&&mp[s]!=j)
            {
                f=1;
                cout<<i+1<<in<<j+1<<in<<mp[s]+1<<endl;
                break;
            }
        }
        if(f==1)break;
    }
    if(f==0)
        cout<<"IMPOSSIBLE"<<endl;
    return 0;
}
