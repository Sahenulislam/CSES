#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
//long long lcm(int a, int b)
//{
//    return (a / (__gcd(a, b))) * b;
//}
#include<map>
#include<queue>
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
    ll n,mx=LONG_MIN,m,a,q,s=0;
    cin>>n;
    map<ll,ll>mp,mp1;
    vector<ll>v;
    for(ll i=0; i<n; i++)
    {
        cin>>a;
        v.pb(a);
    }
    ll l=0;
    for(ll i=0; i<n; i++)
    {
        if(!mp[v[i]])
        {
            mp[v[i]]++;
            s++;
            mp1[v[i]]=i;
        }
        else
        {
            for(ll j=l; j<=mp1[v[i]]; j++)
            {
                mp.erase(v[i]);
                s--;
                l=j+1;
            }
            mp[v[i]]++;
            mp1[v[i]]=i;
            s++;
        }
        mx=max(mx,s);
       //cout<<mx<<endl;
    }
    cout<<mx<<endl;
    return 0;
}


