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
    ll n;
    cin>>n;
    ll a,b;
    vector<pair<ll,ll>>v;
    while(n--)
    {
        cin>>a>>b;
        v.pb({b,a});
    }
    sort(v.begin(),v.end());
    ll q=v[0].first;
    ll ans=1;
    for(ll i=1;i<v.size();i++)
    {
        if(q<=v[i].second)
        {
            q=v[i].first;
            ans++;
            //cout<<q<<endl;
        }
    }
    cout<<ans<<endl;
    return 0;
}
