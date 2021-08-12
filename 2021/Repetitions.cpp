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
    string s;
    cin>>s;
    ll cont=1,mx=1;
    for(ll i=1;i<s.size();i++)
    {
        if(s[i]==s[i-1])
        {
            cont++;
            mx=max(mx,cont);
        }
        else
            cont=1;
    }
    cout<<mx<<endl;
    return 0;
}





