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

int countVow(string &s, int pos = 0, int res = 0)
{
    if (pos == s.size())
        return res;

    if (s[pos] == 'a' || s[pos] == 'e' || s[pos] == 'i' || s[pos] == 'o' || s[pos] == 'u' || 
        s[pos] == 'A' || s[pos] == 'E' || s[pos] == 'I' || s[pos] == 'O' || s[pos] == 'U')
        res++;
        
    return countVow(s, pos + 1, res);
}

// Function for solving the problem
void t_soln()
{
    string s;
    getline(cin, s);

    cout << countVow(s);
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
