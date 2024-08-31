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
    int n, m;
    cin >> n >> m;
    int res = INT_MIN;
    while (n--)
    {
        int x;
        cin >> x;
        res = max(res, x);
    }
    while (m--)
    {
        char sign;
        cin >> sign;
        int l, r;
        cin >> l >> r;
        if (res > r || res < l)
            cout << res << ' ';
        else if (sign == '+')
        {
            res++;
            cout << res << ' ';
        }
        else
        {
            res--;
            cout << res << ' ';
        }
    }
    cout << '\n';
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
