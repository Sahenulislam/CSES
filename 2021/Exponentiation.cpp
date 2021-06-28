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
//#define mod 1000000007
//ll lcm(ll a,ll b)
//{
//    return (a*b/(__gcd(a,b)));
//}
ll mod;
ll modd(ll a,ll b)
{
    if(b==0)
        return 1;
    else if(b==1)
        return a;
    if(b%2==0)
    {
        ll tm=modd(a,b/2);
        return ((tm%mod)*(tm%mod))%mod;
    }
    else
        return ((a%mod)*(modd(a,b-1)%mod))%mod;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    ll t;
//    cin>>t;
    ll a,b;
    while(cin>>a>>b>>mod)
    {
        cout<<modd(a,b)<<endl;
    }
    return 0;
}

