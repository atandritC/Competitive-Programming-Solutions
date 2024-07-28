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
    int n;
    cin >> n;
    vi a(n);
    int twos = 0;
    for (auto &x : a)
    {
        cin >> x;
        if (x == 2)
            twos++;
    }
    if (twos & 1)
        cout << "-1\n";
    else if (!twos)
        cout << "1\n";
    else
    {
        int k, t = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 2)
            {
                t++;
                if (t == twos >> 1)
                {
                    k = i + 1;
                    break;
                }
            }
        }
        cout << k << '\n';
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
