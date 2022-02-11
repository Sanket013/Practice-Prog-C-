#include <iostream>
using namespace std;
int main()
{
    int year, month;
    cout << "Enter  Year,Month: ";
    cin >> year >> month;

    switch (month)
    {
    case 2:
        (year % 4 == 0 && year % 100 == 0 && year % 100 != 0) ? cout << "29 days" : cout << "28 days";
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout << "30 days";
        break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "31 days";
        break;
    default:
        cout << "Not valid";
        break;
    }
    return 0;
}