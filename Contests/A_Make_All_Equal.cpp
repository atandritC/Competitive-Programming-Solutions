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

// Function for solving the problem
void t_soln()
{
    int n;
    cin >> n;
    vi a(n);
    for (auto &x : a)
        cin >> x;

    sort(all(a));
    int res = INT_MIN, count = 1;
    for (int i = 1; i < a.size(); i++)
    {
        if (a[i] == a[i - 1])
            count++;
        else
        {
            res = max(res, count);
            count = 1;
        }
    }
    res = max(res, count);
    res = a.size() - res;
    cout << res << '\n';
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
