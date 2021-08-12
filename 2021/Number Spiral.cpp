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
    while(n--)
    {
        ll a,b,m,mm;
        cin>>a>>b;
        if(a>b)
        {
            m=a*a;
            mm=(a-1)*(a-1);
            if(a%2==0)
            {
                cout<<m-(b-1)<<endl;
            }
            else
            {
                cout<<mm+(b)<<endl;
            }
        }
        else
        {
            m=b*b;
            mm=(b-1)*(b-1);
            if(b%2==0)
            {
                cout<<mm+(a)<<endl;
            }
            else
            {
                cout<<m-(a-1)<<endl;
            }
        }
    }
    return 0;
}







