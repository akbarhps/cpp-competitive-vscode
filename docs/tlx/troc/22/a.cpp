/**
 * Created by akbar on 8/11/2021.
 */

#include <bits/stdc++.h>

using namespace std;

#define SetIO()                  \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL)

int main()
{
    SetIO();

    int n;
    cin >> n;

    bool good = n % 10 == 0;
    if (!good && n > 100)
    {
        if (n % 100 < 10)
            good = true;
    }

    if (good) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}