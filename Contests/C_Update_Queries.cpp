#include <bits/stdc++.h>
using namespace std;

// Define common macros
#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'
#define pb push_back
#define F first
#define S second
#define pii pair<int, int>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vpii vector<pair<int, int>>
#define FAST_IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MOD 1000000007

// Global variables and constants
const int INF = 1e18;

int __gcd(int a, int b)
{
    if (b == 0)
        return a;
    return __gcd(b, a % b);
}

// Function for solving the problem
void t_soln()
{
    int n, m;
    cin >> n >> m;
    string s, c;
    cin >> s;
    vi ind(m);
    for (auto &x : ind)
        cin >> x;
    cin >> c;

    sort(all(c));
    set<int> u_ind(all(ind));
    vi s_ind(all(u_ind));
    sort(all(s_ind));

    map<int, char> i_c;
    for (int i = 0; i < s_ind.size(); i++)
        i_c[s_ind[i]] = c[i];

    for (auto &i : i_c)
        s[i.F - 1] = i.S;
    cout << s << '\n';
}

int32_t main()
{
    FAST_IO;

    int t = 1; // Number of test cases
    cin >> t;

    while (t--)
    {
        t_soln();
    }

    return 0;
}
