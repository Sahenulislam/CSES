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
vector<ll>v[100100],pa[100100];
vector<ll>vv;
ll visit[100100],f=0;
void dfs(ll u)
{
    ll m;
    visit[u]=1;
    for(ll i=0; i<v[u].size(); i++)
    {
        m=v[u][i];
        if(visit[m]==0)
        {
            visit[m]=1;
            pa[m].pb(u);
            dfs(m);
            if(f==2)
                return;
            else if(f==1)
            {
                if(u==vv[0])
                    f=2;
                vv.pb(u);
                return;
            }
        }
        else if(pa[u][0]!=m)
        {
            f=1;
            vv.pb(m);
            vv.pb(u);
            return;
        }
    }
}
int main()
{
    ll n,m,x,y;
    cin>>n>>m;
    for(ll i=0; i<m; i++)
    {
        cin>>x>>y;
        v[x].pb(y);
        v[y].pb(x);
    }
    for(ll i=1; i<=n; i++)
    {
        if(visit[i]==0)
        {
            dfs(i);
        }
        if(f==2)
            break;
    }
    if(f==0)
    {
        cout<<"IMPOSSIBLE"<<endl;
        return 0;
    }
    cout<<vv.size()<<endl;
    for(ll i=0; i<vv.size(); i++)
        cout<<vv[i]<<in;
    cout<<endl;
    return 0;
}

