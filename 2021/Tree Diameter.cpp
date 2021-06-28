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
ll node;
ll mx=0;
void dfs(ll a)
{
    visit[a]=1;
    for(ll i=0; i<v[a].size(); i++)
    {
        ll m=v[a][i];
        if(visit[m]==0)
        {
            level[m]=level[a]+1;
            if(level[m]>mx)
            {
                mx=level[m];
                node=v[a][i];
            }
            dfs(m);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,a,b;
    cin >> t;
    if(t==1)
    {
        cout<<zero<<endl;
        return 0;
    }
    for(ll i=0; i<t-1; i++)
    {
        cin>>a>>b;
        v[a].pb(b);
        v[b].pb(a);
    }
    dfs(a);
    ll m=mx;
    memset(level,0,sizeof(level));
    memset(visit,0,sizeof(visit));
    dfs(node);
    cout<<mx<<endl;
    return 0;
}

