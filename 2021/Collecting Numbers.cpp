#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
#define ll long long
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
long long lcm(int a, int b)
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
#define endint "\n"

int main()
{
    //  fast
    ll t=1;
    //cin>>t;
    while(t--)
    {
       ll n,a;
       cin>>n;
       map<ll,ll>mp;
       for(ll i=0;i<n;i++)
       {
           cin>>a;
           mp[a]=i;
       }
       ll rond=1,q=mp[1];
       for(ll i=2;i<=n;i++)
       {
           if(mp[i]<q)
           {
               q=mp[i];
               rond++;
           }
           else
            q=mp[i];
       }
       cout<<rond<<endl;
    }
    return 0;
}

