#include <bits/stdc++.h>
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
int main()
{
    ll n,m,a,nx,pv;
    cin>>n>>m;
    set<ll>st;
    st.insert(n);
    st.insert(0);
    multiset<ll>stt;
    stt.insert(n);
    for(ll i=0;i<m;i++)
    {
        cin>>a;
        st.insert(a);
        auto it=st.find(a);
        it++;
        nx=*it;
        it--;
        it--;
        pv=*it;
        auto itt=stt.find(nx-pv);
        stt.erase(itt);
        stt.insert(a-pv);
        stt.insert(nx-a);
        auto iit=stt.end();
        iit--;
        cout<<*iit<<endl;
    }
    return 0;
}

