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
    int pts = 0;
    for (int i = 0; i < 10; i++)
    {
        string row;
        cin >> row;
        for (int j = 0; j < 10; j++)
        {
            if (row[j] == 'X')
            {
                if (!i || i == 9 || !j || j == 9)
                    pts += 1;
                else if (i == 1 || i == 8 || j == 1 || j == 8)
                    pts += 2;
                else if (i == 2 || i == 7 || j == 2 || j == 7)
                    pts += 3;
                else if (i == 3 || i == 6 || j == 3 || j == 6)
                    pts += 4;
                else
                    pts += 5;
            }
        }
    }
    cout << pts << '\n';
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
