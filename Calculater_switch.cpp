#include <iostream>
using namespace std;

int main()
{
    float n1, n2;
    char op;
    cout << "Enter a two no:" << endl;
    cin >> n1 >> n2;

    cout << "Enter operation" << endl;
    cin >> op;
    switch (op)
    {
    case '+':
        cout << n1 + n2 << endl;
        break;
    case '-':
        cout << n1 - n2 << endl;
        break;
    case '/':
        cout << n1 / n2 << endl;
        break;
    case '*':
        cout << n1 * n2 << endl;
        break;
    case '%':
        bool isN1int, isN2int;
        isN1int = (int(n1) == n1);
        isN2int = (int(n2) == n2);
        if (isN1int && isN2int)
            cout << isN1int % isN2int << endl;
        else
            cout << "invalid" << endl;
    default:
        cout << "Invalid" << endl;
    }
    return 0;
}