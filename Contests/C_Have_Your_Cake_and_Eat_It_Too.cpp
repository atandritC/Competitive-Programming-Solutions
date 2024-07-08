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

// Function for solving the problem
void t_soln()
{
    int n;
    cin >> n;
    vvi pVal(3, vi(n));
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < n; j++)
            cin >> pVal[i][j];

    int tSum = (accumulate(all(pVal[0]), 0LL) + 2) / 3;
    vi res(6), perm(3);
    bool flag = false;
    iota(all(perm), 0);
    do
    {
        int curP = 0, piece = 0, sum = 0;
        vi v;

        while (piece < n)
        {
            sum += pVal[perm[curP]][piece];
            if (sum >= tSum)
            {
                v.pb(piece);
                curP++;
                sum = 0;
            }
            if (curP == 3)
                break;
            piece++;
        }

        if (curP == 3)
        {
            v[2] = n - 1;
            int fP = 0;
            for (int i = 0; i < 3; i++)
            {
                res[2 * perm[i]] = fP;
                res[2 * perm[i] + 1] = v[i];
                fP = v[i] + 1;
            }

            for (auto &i : res)
                cout << i + 1 << ' ';
            flag = true;
            break;
        }
    } while (next_permutation(all(perm)));

    if (!flag)
        cout << "-1";
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
