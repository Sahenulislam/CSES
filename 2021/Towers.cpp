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

int main()
{
    // fast
    ll t=1;
    // cin>>t;
    while(t--)
    {
        ll ans=0,n,m;
        cin>>n;
        multiset<ll>st;
        ll a[n+10];
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        ll tow=0;
        for(ll i=0; i<n; i++)
        {
            auto it=st.upper_bound(a[i]);

            if(it==st.end())
            {
                st.insert(a[i]);
                tow++;
                continue;
            }
            st.erase(it);
            //cout<<st.size()<<endl;
            st.insert(a[i]);

        }
        cout<<tow<<endl;
    }
    return 0;
}

