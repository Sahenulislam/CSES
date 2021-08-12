
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
ll a[1000005];
int main()
{
    ll t=1;
    // cin>>t;
    while(t--)
    {
        for(ll i=1; i<=1000000; i++)
        {
            for(ll j=i; j<=1000000; j+=i)
            {
               a[j]++;
            }
        }
        ll n,m;
        cin>>n;
        while(n--)
        {
            cin>>m;
            cout<<a[m]<<endl;
        }
    }

    return 0;
}

