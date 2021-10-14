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
    ll n,q;
    cin>>n>>q;
    ll c[n+10];
    for(ll i=0; i<n; i++)
        cin>>c[i];
    ll k=log2(n);
    ll sps_tb[k+10][n+10];
    for(ll i=0; i<n; i++)
    {
        sps_tb[0][i]=c[i];
    }
    for(ll i=1; i<=k; i++)
    {
        for(ll j=0; j+(1<<i-1)<=n; j++)
        {
            sps_tb[i][j]=min(sps_tb[i-1][j],sps_tb[i-1][j+(1<<i-1)]);
        }
    }
    while(q--)
    {
        ll a,b;
        cin>>a>>b;
        a--,b--;
        ll m=log2(b-a+1);
        cout<<min(sps_tb[m][a],sps_tb[m][b-(1<<m)+1])<<endl;
    }
    return 0;
}

