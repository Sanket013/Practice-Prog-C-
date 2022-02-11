#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool flag = true;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "Non-Prime" << endl;
            flag = false;
        }
    }
    if (flag == true)
    {
        cout << "Prime Number" << endl;
    }

    return 0;
}