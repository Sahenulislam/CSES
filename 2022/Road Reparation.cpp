#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mxn = 1e5;
vector<ll> gr[mxn + 5];
vector<pair<ll, pair<ll, ll>>> g;
ll parent[mxn + 5], ans = 0, vist[mxn + 4];
set<ll> st;
void dfs(ll u) // For Connected Component
{
    vist[u] = 1;
    for (auto v : gr[u])
    {
        if (vist[v] == 0)
        {
            dfs(v);
        }
    }
}

void make_set(ll n)
{
    for (ll i = 0; i <= n; i++)
    {
        parent[i] = i;
    }
}

ll find(ll x)
{
    if (x == parent[x])
        return x;
    else
        return parent[x] = find(parent[x]);
}

ll unio(ll u, ll v)
{
    u = find(u);
    v = find(v);
    if (u == v)
        return 0;
    else
    {
        parent[u] = v;
        return 1;
    }
}

void MST() // Minimum Spaning Tree
{
    for (ll i = 0; i < g.size(); i++)
    {
        ll u = g[i].second.first;
        ll v = g[i].second.second;
        ll cost = g[i].first;

        if (unio(u, v))
        {
            st.insert(u);
            st.insert(v);
            ans += cost;
        }
    }
}
int main()
{
    ll n, m, U, V, c;
    cin >> n >> m;
    make_set(n);
    ans = 0;
    for (ll i = 0; i < m; i++)
    {
        cin >> U >> V >> c;
        gr[U].push_back(V);
        gr[V].push_back(U);
        g.push_back({c, {U, V}});
    }
    ll cnt = 0;
    for (ll i = 1; i <= n; i++)
    {
        if (vist[i] == 0)
        {
            cnt++;
            dfs(i);
        }
    }
    sort(g.begin(), g.end());
    MST();
    if (cnt == 1)
        cout << ans << endl;
    else
        cout << "IMPOSSIBLE" << endl;
}
