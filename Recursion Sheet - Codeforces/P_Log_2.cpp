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

int log2(int n, int res = 0)
{
    if (n == 1)
        return res;

    res++;
    return log2(n / 2, res);
}

// Function for solving the problem
void t_soln()
{
    int n;
    cin >> n;
    cout << log2(n) << '\n';
}

int32_t main()
{
    FAST_IO;

    int t = 1; // Number of test cases
    // cin >> t;

    while (t--)
    {
        t_soln();
    }

    return 0;
}
