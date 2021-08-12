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
    // fast
    ll t;
    cin>>t;
    while(t--)
    {
       ll a,b;
       cin>>a>>b;
       ll k=(a+b)/3;
       if(k<=min(a,b)&&(a+b)%3==0)
        cout<<yes<<endl;
       else
        cout<<no<<endl;
    }
    return 0;
}

