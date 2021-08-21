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

int main()
{
    ll n,q,b,c;
    cin>>n>>q;
    ll a[n+10];
    ll pres[n+10];
    for(ll i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    pres[0]=0;
    pres[1]=a[1];
    for(ll i=2;i<=n;i++)
    {
        pres[i]=pres[i-1]+a[i];
    }
    for(ll i=1;i<=q;i++)
    {
        cin>>b>>c;
        cout<<pres[c]-pres[b-1]<<endl;
    }
    return 0;
}

