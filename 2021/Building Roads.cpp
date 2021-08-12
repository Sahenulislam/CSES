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
vector<ll>v[100100];
ll visit[100100];
void dfs(ll u)
{
    visit[u]=1;
    for(ll i=0;i<v[u].size();i++)
    {
        ll m=v[u][i];
        if(visit[m]==0)
        {
            visit[m]=1;
            dfs(m);
        }
    }
}
int main()
{
    ll n,m,a,b,cont=0;
    cin>>n>>m;
    vector<ll>vv;
    for(ll i=0; i<m; i++)
    {
        cin>>a>>b;
        v[a].pb(b);
        v[b].pb(a);
    }
    for(ll i=1; i<=n; i++)
    {
        if(visit[i]==0)
        {
            cont++;
            vv.pb(i);
            dfs(i);
        }
    }
    cout<<cont-1<<endl;
    for(ll i=0; i<vv.size()-1; i++)
    {
        cout<<vv[i]<<in<<vv[i+1]<<endl;
    }
    return 0;
}

