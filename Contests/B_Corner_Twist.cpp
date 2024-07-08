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
    vector<string> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    for (int i = 0; i < n; i++)
    {
        int aSum = 0, bSum = 0;
        for (int j = 0; j < m; j++)
        {
            aSum += (a[i][j] - '0');
            bSum += b[i][j] - '0';
        }
        if (aSum % 3 != bSum % 3)
        {
            cout << "NO\n";
            return;
        }
    }
    for (int i = 0; i < m; i++)
    {
        int aSum = 0, bSum = 0;
        for (int j = 0; j < n; j++)
        {
            aSum += (a[j][i] - '0');
            bSum += (b[j][i] - '0');
        }
        if (aSum % 3 != bSum % 3)
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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
