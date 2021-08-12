#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
//long long lcm(int a, int b)
//{
//    return (a / (__gcd(a, b))) * b;
//}
#include<map>
#include<queue>
#define yes "YES"
#define no "NO"
#define pb push_back
#define si size()
#define in " "
#define mone "-1"
#define zero "0"
#define one "1"
#define PI acos(-1)
#define en "\n"
vector<ll>v[200100];
ll visit[200100]= {0};
ll sub[200100]= {0};
ll R[5]= {0,1,-1,0};
ll C[5]= {1,0,0,-1};
ll dfs(ll u)
{
    visit[u]=1;
    for(ll i=0; i<v[u].size(); i++)
    {
        ll m=v[u][i];
        if(visit[m]==0)
        {
            visit[m]=1;
            dfs(m);
            sub[u]=sub[u]+sub[m]+1;
        }
    }
    return 0;
}
//void bfs(ll i,ll j)
//{
//    ll rr,cc,a,b;
//    visit[i][j]=1;
//    queue<pair<ll,ll>>q;
//    q.push({i,j});
//    while(!q.empty())
//    {
//        a=q.front().first;
//        b=q.front().second;
//        q.pop();
//        for(ll i=0; i<4; i++)
//        {
//            rr=a+R[i];
//            cc=b+C[i];
//            if(rr>=0&&rr<n&&cc>=0&&cc<m&&v[rr][cc]==1&&visit[rr][cc]==0)
//            {
//                q.push({rr,cc});
//                visit[rr][cc]=1;
//            }
//        }
//    }
//}
int main()
{
    ll n,a;
    cin>>n;
    for(ll i=2;i<=n;i++)
    {
        cin>>a;
        v[a].pb(i);
    }
    dfs(1);
    for(ll i=1;i<=n;i++)
        cout<<sub[i]<<in;
    cout<<endl;
    return 0;
}

