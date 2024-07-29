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

bool cmp(int a, int b)
{
    return a > b;
}

// Function for solving the problem
void t_soln()
{
    int n;
    cin >> n;
    vi a(n);
    for (auto &x : a)
        cin >> x;

    sort(all(a), cmp);
    if (a[0] == a[n - 1])
    {
        cout << "NO\n";
        return;
    }
    if (a[0] == a[1])
    {
        int i = 1;
        while (a[i] == a[0])
            i++;
        swap(a[1], a[i]);
    }
    cout << "YES\n";
    for (auto &x : a)
        cout << x << ' ';
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
