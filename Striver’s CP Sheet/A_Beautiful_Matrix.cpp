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
    int matrix[6][6];
    int b_i, b_j;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cin >> matrix[i][j];
            if (matrix[i][j])
            {
                b_i = i;
                b_j = j;
            }
        }
    }

    int res = abs(3 - b_i) + abs(3 - b_j);
    cout << res << '\n';
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
