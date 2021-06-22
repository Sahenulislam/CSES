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
       ll n,m,d,cont=0;
       cin>>n>>m>>d;
       ll ma[n+10];
       ll a[m+10];
       for(ll i=0;i<n;i++)
       {
           cin>>ma[i];
       }
       for(ll i=0;i<m;i++)
       {
           cin>>a[i];
       }
       sort(a,a+m);
       sort(ma,ma+n);
       for(ll i=0,j=0;i<n&&j<m;)
       {
           ll l=ma[i]-d;
           ll r=ma[i]+d;
           if(l<=a[j]&&r>=a[j])
           {
               i++;
               j++;
               cont++;
           }
           else if(l>a[j])
           {
               j++;
           }
           else if(r<a[j])
            i++;
       }
       cout<<cont<<endl;

    }
    return 0;
}



