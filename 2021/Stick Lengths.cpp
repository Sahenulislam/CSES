#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
#define ll long long
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
//long long lcm(ll a, ll b)
//{
//    return (a / (__gcd(a, b))) * b;
//}
//#include<map>
//#include<vector>
//#include<algorithm>
#define yes "YES"
#define no "NO"
#define pb push_back
#define si size()
#define in " "
#define mone "-1"
#define zero "0"
#define one "1"
#define PI acos(-1)
#define endll "\n"
int visit[100005];
set<int>st[100005];
int aa[100005];
int main()
{
    ll n,a,ans=0,q;
    cin>>n;
    vector<ll>v;
    map<ll,ll>mp;
    for(ll i=0; i<n; i++)
    {
        cin>>a;
        mp[a]++;
        v.pb(a);
    }
    sort(v.begin(),v.end());
    for(ll i=1; i<n; i++)
    {
        ans+=abs(v[0]-v[i]);
    }
    ll mn=ans;
    //cout<<ans<<endl;
    for(ll i=1; i<v.size(); i++)
    {
        if(v[i]==v[i-1])continue;
        q=abs(v[i-1]-v[i]);
        //cout<<q<<endl;
        ans=ans+(q*(i-0))-(q*(v.size()-i));
       // cout<<ans<<endl;
        mn=min(mn,ans);
    }
    cout<<mn<<endl;
    return 0;
}
