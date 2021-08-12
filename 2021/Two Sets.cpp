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

    ll n;
    cin>>n;
    vector<ll>v1,v2;
    ll s=0,ss=0,sum=0;
    for(ll i=n; i>=1; i--)
    {
        sum+=i;
        if(s<=ss)
        {
            v1.pb(i);
            s+=i;
        }
        else
        {
            v2.pb(i);
            ss+=i;
        }
    }
    if(sum%2!=0)
        cout<<no<<endl;
    else
    {
        cout<<yes<<endl;
        cout<<v1.size()<<endl;
        for(ll i=0; i<v1.size(); i++)
            cout<<v1[i]<<in;
        cout<<endl;
        cout<<v2.size()<<endl;
        for(ll i=0; i<v2.size(); i++)
            cout<<v2[i]<<in;
        cout<<endl;
    }
    return 0;
}

