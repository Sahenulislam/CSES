#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
long long lcm(ll a, ll b)
{
    return (a / (__gcd(a, b))) * b;
}
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
    ll n;
    cin>>n;
    ll a[n+10];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll sum=0,mx=LONG_MIN;
    for(ll i=0;i<n;i++)
    {
        sum+=a[i];
        if(sum<=a[i])
        {
            sum=0;
            sum+=a[i];
        }
        mx=max(mx,sum);
    }
    cout<<mx<<endl;
    return 0;
}
