// https://codeforces.com/blog/entry/63962
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int maxn = 200002;
int n;
ll a[maxn], tot, ans;
vector<int> g[maxn];
ll subtot[maxn], sum[maxn];

void dfs(int u, int p)
{
    subtot[u] = 0LL;
    sum[u] = a[u];

    for (int v : g[u])
        if (v != p)
        {
            dfs(v, u);
            sum[u] += sum[v];
            subtot[u] += subtot[v] + sum[v];
        }
}

void dfs2(int u, int p, ll up)
{
    ll cur = subtot[u] + up + tot - sum[u];
    ans = max(ans, cur);
    for (int v : g[u])
        if (v != p)
        {
            dfs2(v, u, cur - subtot[v] - sum[v]);
        }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        tot += a[i];
    }

    for (int i = 1; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    dfs(1, 0);
    dfs2(1, 0, 0LL);

    cout << ans;

    return 0;
}