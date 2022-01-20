#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,x;
    cin>>n;
    ll a[n+2];
    stack<ll>st1,st2;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    st1.push(0);
    st2.push(0);
    for(ll i=0;i<n;i++)
    {
        while(st1.top()>=a[i])
        {
            st1.pop();
            st2.pop();
        }
        cout<<st2.top()<<" ";
        st1.push(a[i]);
        st2.push(i+1);
    }
    return 0;
}

