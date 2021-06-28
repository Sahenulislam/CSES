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
vector<ll>v[200200];
ll visit[200200];
ll level[200200];
ll mx=0;
void dfs(ll u)
{
    visit[u]=1;
    for(ll i=0;i<v[u].size();i++)
    {
        ll m=v[u][i];
        if(!visit[m])
        {
            visit[m]=1;
            level[m]=level[u]+1;
            mx=max(mx,level[m]);
            dfs(m);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    ll t;
//    cin >> t;
//    while (t--)
//    {
    ll n,a,b;
    cin>>n;
    set<ll>st;
    for(ll i=0;i<n-1;i++)
    {
        cin>>a>>b;
        v[a].pb(b);
        v[b].pb(a);
        st.insert(a);
        st.insert(b);
    }
    for(auto i: st)
    {
        for(ll i=0;i<n+10;i++)
        {
            visit[i]=0;
            level[i]=0;
        }
        dfs(i);
        cout<<mx<<in;
        mx=0;
    }

    // }
    return 0;
}

