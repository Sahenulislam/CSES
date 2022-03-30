#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mxn=1e5;
vector<ll>g[mxn+3],ing[mxn+3];
ll vist1[mxn+3],vist2[mxn+3];
ll dfs_general_edge(ll u)
{
    vist1[u]=1;
    for(auto v: g[u])
    {
        if(vist1[v]==0)
        {
            dfs_general_edge(v);
        }
    }
}
ll dfs_inverse_edge(ll u)
{
    vist2[u]=1;
    for(auto v: ing[u])
    {
        if(vist2[v]==0)
        {
            dfs_inverse_edge(v);
        }
    }
}
int main()
{
    ll n,m,u,v;
    cin>>n>>m;
    for(ll i=0; i<m; i++)
    {
        cin>>u>>v;
        g[u].push_back(v);
        ing[v].push_back(u);
    }
    dfs_general_edge(1);
    dfs_inverse_edge(1);
    for(ll i=1;i<=n;i++)
    {
        if(vist1[i]==0)
        {
            cout<<"NO"<<endl;
            cout<<"1 "<<i<<endl;
            return 0;
        }
        else if(vist2[i]==0)
        {
            cout<<"NO"<<endl;
            cout<<i<<" 1"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}

