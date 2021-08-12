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
    cout<<n<<in;
    while(n!=1)
    {
        if(n%2==0)
            n=n/2;
        else
            n=(n*3)+1;
        cout<<n<<in;
    }
    return 0;
}




