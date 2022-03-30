#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll mxn=1e5;
ll parent[mxn+3],siz[mxn+3],com,mx=1;
void init(ll n)
{
    for(ll i=1;i<=n;i++)
    {
        parent[i]=i;
        siz[i]=1;
    }
}

ll sett(ll x)
{
    if(x==parent[x])
        return x;
    return parent[x]=sett(parent[x]);
}

void join(ll u,ll v)
{
    ll uu=sett(u);
    ll vv=sett(v);
    if(uu!=vv)
    {
        com--;
        if(siz[uu]<siz[vv])
            swap(uu,vv);
        siz[uu]+=siz[vv];
        mx=max(siz[uu],mx);
        parent[vv]=uu;
    }
}
int main()
{
    ll n,m,u,v;
    cin>>n>>m;
    init(n);
    vector<pair<ll,ll>>g;
    com=n;
    for(ll i=0;i<m;i++)
    {
        cin>>u>>v;
        g.pb({u,v});
    }
    for(ll i=0;i<m;i++)
    {
        ll u=g[i].first;
        ll v=g[i].second;
        join(u,v);
        cout<<com<<" "<<mx<<endl;
    }

}
