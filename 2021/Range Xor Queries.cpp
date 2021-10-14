#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mx=2e5;
ll st[4*mx],a[mx+4];
void build(ll cur,ll left,ll right)
{
    if(left==right)
    {
        st[cur]=a[left];
        return;
    }
    ll mid=(left+right)/2;
    build(cur*2,left,mid);
    build(cur*2+1,mid+1,right);
    st[cur]=st[cur*2]^st[cur*2+1];
}
ll query(ll cur,ll left,ll right,ll l,ll r)
{
    if(right<l||left>r)return 0;
    if(l<=left&&r>=right)return st[cur];
    ll mid=(left+right)/2;
    ll x=query(cur*2,left,mid,l,r);
    ll y=query(cur*2+1,mid+1,right,l,r);
    return (x^y);
}
int main()
{
    ll n,q;
    cin>>n>>q;
    for(ll i=0;i<n;i++)cin>>a[i];
    build(1,0,n-1);
    while(q--)
    {
        ll a,b;
        cin>>a>>b;
        a--,b--;
        cout<<query(1,0,n-1,a,b)<<endl;
    }
    return 0;
}

