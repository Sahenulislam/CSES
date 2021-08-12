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
vector<ll>v[100100];
ll visit[100100],level[100100],f=0;
void bfs(ll u)
{
    ll a,m;
    visit[u]=1;
    level[u]=1;
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
                if(level[a]==1)
                    level[m]=2;
                else if(level[a]==2)
                    level[m]=1;
                else
                    level[m]=1;
                q.push(m);
            }
            else if(level[a]==level[m])
            {
                f=1;
                break;
            }
        }
        if(f==1)
            break;
    }
}
int main()
{
    ll n,m,a,b;
    cin>>n>>m;
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
            bfs(i);
        }
        if(f==1)
        {
            cout<<"IMPOSSIBLE"<<endl;
            return 0;
        }
    }
    for(ll i=1; i<=n; i++)
    {
        cout<<level[i]<<in;
    }
    return 0;
}

