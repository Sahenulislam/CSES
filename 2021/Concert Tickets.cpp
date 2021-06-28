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
#define fast ios_base::sync_with_stdio(false);  cin.tie(NULL);
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
        ll n, m, c, cont = 0;
        cin >> n >> m;
        vector<ll> a, b;
        multiset<ll> st;
        for (ll i = 0; i < n; i++)
        {
            cin >> c;
            st.insert(c);
        }
        for (ll i = 0; i < m; i++)
        {
            cin >> c;
            b.pb(c);
        }
        for (ll i = 0; i < m; i++)
        {
            auto it = st.upper_bound(b[i]);
            if (it == st.begin())
            {
                cout << mone << endl;
                continue;
            }
            it--;
            cout << *it << endl;
            st.erase(it);
        }
    }
    return 0;
}
