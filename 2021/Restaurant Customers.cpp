#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define yes "YES"
#define no "NO"
#define pb push_back
#define si size()
#define in " "
#define gap " "
#define mone "-1"
#define zero "0"
#define one "1"
#define PI acos(-1)
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
ll lcm(ll a, ll b)
{
    return (a / (__gcd(a, b))) * b;
}
int main()
{
    fast;
    ll t = 1;
    //cin>>t;
    while (t--)
    {
        ll n, i = 0, ans = 0, j = 0;
        cin >> n;
        vector<pair<ll, ll>> v;
        ll mx = LONG_LONG_MIN;
        while (i < n)
        {
            ll a, b;
            cin >> a >> b;
            v.pb({a, 1});
            v.pb({b, -1});
            i++;
        }
        sort(v.begin(), v.end());
        for (ll i = 0; i < v.size(); i++)
        {
            ans += v[i].second;
            mx = max(mx, ans);
        }
        cout << mx << endl;
    }
    return 0;
}
