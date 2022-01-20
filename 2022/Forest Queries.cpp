#include <bits/stdc++.h>
using namespace std;
#define ll int
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
const ll mxn=1000;
ll presum[mxn+2][mxn+2];
char ch[mxn+2][mxn+2];
int main()
{
    fast
    ll n,q;
    cin>>n>>q;
    for(ll i=1; i<=n; i++)
    {
        for(ll j=1; j<=n; j++)
        {
            cin>>ch[i][j];
        }
    }
    for(ll i=1; i<=n; i++)
    {
        for(ll j=1; j<=n; j++)
        {
            presum[i][j]=presum[i][j-1];
            if(ch[i][j]=='*')
                presum[i][j]+=1;
        }
    }
    ll x1,x2,y1,y2,sum;
    while(q--)
    {
        cin>>x1>>y1>>x2>>y2;
        sum=0;
        for(ll i=x1; i<=x2; i++)
        {
            sum+=presum[i][y2]-presum[i][y1-1];
        }
        cout<<sum<<endl;
    }
    return 0;
}

