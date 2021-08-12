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
vector<ll>v[200100],pa[200100];
ll visit[200100];
void bfs(int u)
{
    ll a,m;
    visit[u]=1;
    queue<ll>q;
    q.push(u);
    while(!q.empty())
    {
        a=q.front();
        q.pop();
        for(ll i=0; i<v[a].size(); i++)
        {
            m=v[a][i];
            if(visit[m]==0)
            {
                visit[m]=1;
                pa[m].pb(a);
                q.push(m);
            }
        }
    }
}
int main()
{
    ll n,u,a,b;
    cin>>n>>u;
    vector<ll>vv;
    for(ll i=0; i<u; i++)
    {
        cin>>a>>b;
        v[a].pb(b);
        v[b].pb(a);
    }
    bfs(1);
    if(visit[n]==0)
    {
        cout<<"IMPOSSIBLE"<<endl;
        return 0;
    }
    ll m=n;
    vv.pb(m);
    while(m!=1)
    {
        m=pa[m][0];
        vv.pb(m);
    }
    cout<<vv.size()<<endl;
    for(ll i=vv.size()-1; i>=0; i--)
        cout<<vv[i]<<in;
    cout<<endl;
    return 0;
}


