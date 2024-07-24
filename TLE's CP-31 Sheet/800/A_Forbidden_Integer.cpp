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
    int n, k, x;
    cin >> n >> k >> x;

    if (x != 1)
    {
        cout << "YES\n";
        cout << n << '\n';
        for (int i = 1; i <= n; i++)
            cout << "1 ";
        cout << '\n';
    }
    else if (n == k && x != n)
    {
        cout << "YES\n";
        cout << "1\n";
        cout << n << '\n';
    }
    else
    {
        vi res;
        bool isPoss = true;
        int i = 2;
        while (true)
        {
            n -= i;
            if (n == x)
            {
                isPoss = false;
                break;
            }
            else if (n <= k)
            {
                res.pb(i);
                res.pb(n);
                break;
            }
            else
                res.pb(i);
        }
        if (isPoss && k != x)
        {
            cout << "YES\n";
            cout << res.size() << '\n';
            for (auto &x : res)
                cout << x << ' ';
            cout << '\n';
        }
        else
            cout << "NO\n";
    }
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
