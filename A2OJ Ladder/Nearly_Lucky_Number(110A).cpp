#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    int luckydigis = 0;
    cin >> n;

    while (n != 0)
    {
        if (n % 10 == 4 || n % 10 == 7)
        {
            luckydigis++;
        }
        n = n / 10;
    }

    if (luckydigis == 4 || luckydigis == 7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}