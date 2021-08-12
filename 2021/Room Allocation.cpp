#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
long long lcm(int a, int b)
{
    return (a / (__gcd(a, b))) * b;
}
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
#define endint "\n"
int main()
{
    ll n,a,b,j=1,k;
    cin>>n;
    ll d[n+10];
    multiset<pair<ll,ll>>st;
    vector<pair<ll,pair<ll,ll>>>vv;
    for(ll i=0;i<n;i++)
    {
        cin>>a>>b;
        vv.pb({a,{b,i}});
    }
    sort(vv.begin(),vv.end());
    for(ll i=0; i<n; i++)
    {
        b=vv[i].second.first;
        a=vv[i].first;
        auto it=st.upper_bound({a,-1e8});
        if(it==st.begin())
        {
            d[vv[i].second.second]=j;
            st.insert({b,j});
            j++;
        }
        else
        {
            it--;
            d[vv[i].second.second]=it->second;
            st.erase(it);
            st.insert({b,it->second});
        }
    }
    cout<<j-1<<endl;
    for(ll i=0; i<n; i++)
    {
        cout<<d[i]<<in;
    }
    return 0;
}
