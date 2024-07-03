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
#define vvi vector<vector<int> >
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

void matSum(vvi &m1, vvi &m2, int r, int c, int i = 0, int j = 0)
{
    if (i == r)
        return;

    if (j == c)
    {
        cout << '\n';
        matSum(m1, m2, r, c, i + 1);
        return;
    }

    cout << m1[i][j] + m2[i][j] << ' ';
    matSum(m1, m2, r, c, i, j + 1);
}

// Function for solving the problem
void t_soln()
{
    int r, c;
    cin >> r >> c;
    vvi m1(r, vi(c)), m2(r, vi(c));

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> m1[i][j];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> m2[i][j];

    matSum(m1, m2, r, c);
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
