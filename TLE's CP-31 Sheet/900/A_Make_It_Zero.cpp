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
    int sum = 0, temp = n;
    while (temp--)
    {
        int x;
        cin >> x;
        sum += x;
    }

    if (!sum)
        cout << "0\n";
    else if (n & 1)
        cout << "4\n1 " << n << "\n1 " << n - 1 << '\n'
            << n - 1 << " " << n << '\n'
            << n - 1 << " " << n << '\n';
    else
        cout << "2\n1 " << n << "\n1 " << n << '\n';
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
