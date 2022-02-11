#include <bits/stdc++.h>
using namespace std;

void fib(int n)
{
    int n1 = 0, n2 = 1;
    for (int i = 1; i <= n; i++)
    {
        cout << n1 << " ";
        int sum = n1 + n2;
        n1 = n2;
        n2 = sum;
    }
    return;
}
int main()
{
    int n;
    cin >> n;
    fib(n);
    return 0;
}