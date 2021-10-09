#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, ans = 0;
    cin >> n;
    string str;
    cin >> str;

    for (int i = 0; i < n - 1; i++)
    {
        if (str[i] == str[i + 1])
        {
            ans++;
        }
    }

    cout << ans;

    return 0;
}