#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes "YES"
#define no "NO"
#define pb push_back
#define si size()
#define in " "
#define mone "-1"
#define zero "0"
#define one "1"
//ll aa[333333];
//
//vector<ll>vec[100999];
int main()
{
    ll t=1;
    //cin>>t;
    while(t--)
    {
        ll n,w,a;
        cin>>n>>w;
        multiset<ll>st;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            st.insert(a);
        }
        ll sum=w,cont=0,ch=0;
        while(!st.empty())
        {
            auto it=st.upper_bound(sum);
            if(it!=st.begin())
            {
                sum-=*--it;
                st.erase(it);
                ch++;
                if(ch!=2&&st.empty())
                {
                    cont++;
                }
                if(ch==2)
                {
                    cont++;
                    sum=w;
                    ch=0;
                }
            }
            else
            {
                sum=w;
                cont++;
            }
        }
        cout<<cont<<endl;
    }
    return 0;
}
