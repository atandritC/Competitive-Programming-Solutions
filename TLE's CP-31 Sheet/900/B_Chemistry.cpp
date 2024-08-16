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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int charFreq = 0;
    for (int i = 0; i < s.size(); i++)
        charFreq ^= (1 << (s[i] - 'a'));

    int setBits = 0;
    while (charFreq)
    {
        charFreq &= (charFreq - 1);
        setBits++;
    }

    if (setBits > k && setBits - k != 1)
        cout << "NO\n";
    else
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
