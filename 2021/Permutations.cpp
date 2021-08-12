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
#define PI acos(-1)
int main()
{
    ll n;
    cin>>n;
    if(n==1)
        cout<<1<<endl;
    else if(n<4)
        cout<<"NO SOLUTION"<<endl;
        else if(n==4)cout<<"2 4 1 3"<<endl;
    else
    {
        for(ll i=1;i<=n;i++)
            if(i%2!=0)cout<<i<<in;
        for(ll i=1;i<=n;i++)
            if(i%2==0)cout<<i<<in;
        cout<<endl;
    }
    return 0;
}






