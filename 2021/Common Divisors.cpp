
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
#define endint "\n"


ll a[1000005]={0};
int main()
{
    ll t=1;
    // cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n;
        for(ll i=0; i<n; i++)
        {
            cin>>m;
            a[m]++;
        }
        ll mx=1,k;
        for(ll i=2; i<=1000000; i++)
        {
            k=0;
            for(ll j=i; j<=1000000; j+=i)
            {
                if(a[j]!=0)
                    k++;
                if(k==2||a[i]>1)
                {
                    mx=max(mx,i);
                    break;
                }
            }
        }
        cout<<mx<<endl;
    }

    return 0;
}
