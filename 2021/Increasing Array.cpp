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
    ll n,sum=0;
    cin>>n;
    ll a[n+10];
    for(ll i=0; i<n; i++)
        cin>>a[i];
    for(ll i=1;i<n;i++)
    {
        if(a[i]<a[i-1])
        {
            sum+=(a[i-1]-a[i]);
            a[i]=a[i-1];
        }
    }
    cout<<sum<<endl;
    return 0;
}





