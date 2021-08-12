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
ll v[1010][1010];
ll visit[1010][1010]={0};
ll R[5]= {0,1,-1,0};
ll C[5]= {1,0,0,-1};
ll n,m;
void dfs(ll i,ll j)
{
    visit[i][j]=1;
    for(ll k=0;k<4;k++)
    {
        ll rr=i+R[k];
        ll cc=j+C[k];
        if(rr>=0&&rr<n&&cc>=0&&cc<m&&v[rr][cc]==1&&visit[rr][cc]==0)
        {
            visit[rr][cc]=1;
            dfs(rr,cc);
        }
    }
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
    ll cont=0;
    char ch;
    cin>>n>>m;
    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<m; j++)
        {
            cin>>ch;
            if(ch=='.')
                v[i][j]=1;
            else
                v[i][j]=0;
        }
    }
    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<m; j++)
        {
            if(visit[i][j]==0&&v[i][j]==1)
            {
                cont++;
            dfs(i,j);
            }
        }
    }
    cout<<cont<<endl;
    return 0;
}
